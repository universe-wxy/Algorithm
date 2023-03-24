#include <bits/stdc++.h>
#define MAXN 210
using namespace std;
struct Edge
{
    int u, v, w, next;
    Edge(int u = 0, int v = 0, int w = 0, int next = 0) : u(u), v(v), w(w), next(next) {}
} edge[MAXN * MAXN];
int head[MAXN*MAXN], cnt,c[MAXN],income[MAXN];
bool active[MAXN];
void addedge(int u,int v,int w){
    edge[++cnt]=Edge(u,v,w,head[u]);
    head[u]=cnt;
}
queue<int> q;
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n,m;
    cin>>n>>m;
    memset(c,0,sizeof(c));
    for(int i=1;i<=n;i++){
        int active;
        int u;
        cin>>active>>u;
        if(active){
            q.push(i);
            c[i]=active;
        }
        else
            c[i]-=u;    
    }
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        addedge(u,v,w);
        income[v]++;
    }
    while(!q.empty()){
        int u=q.front();
        q.pop();
        if(c[u]<=0){
            for(int i=head[u];i;i=edge[i].next){
                int v=edge[i].v;
                income[v]--;
                if(income[v]==0)
                    q.push(v);
            }
        }
        else{
            for(int i=head[u];i;i=edge[i].next){
                int v=edge[i].v;
                c[v]+=c[u]*edge[i].w;
                income[v]--;
                if(income[v]==0)
                    q.push(v);
            }
        }
    }
    bool flag=false;
    for(int i=1;i<=n;i++)
        if(!head[i]&&c[i]>0){
            cout<<i<<' '<<c[i]<<endl;
            flag=true;
        }
    if(flag==false)
        cout<<"NULL"<<endl;
    return 0;
    fclose(stdin);
    fclose(stdout);
}