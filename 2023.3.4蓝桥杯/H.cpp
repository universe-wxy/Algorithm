#include<bits/stdc++.h>
using namespace std;
#define MAXN 20005
struct Node{
    int u,v,w,next;
    Node(int u=0,int v=0,int w=0,int next=0):u(u),v(v),w(w),next(next){}
}edge[MAXN];
int head[MAXN],cnt,n;
int f[MAXN][MAXN];
bool vis[MAXN];
void add(int u,int v,int w){
    edge[++cnt]=Node(u,v,w,head[u]);
    head[u]=cnt;
}
int FindDep(int u,int V){
    if(u==V)
        return 0;
    int ans=-1;
    for(int i=head[u];i;i=edge[i].next){
        int v=edge[i].v;
        if(vis[v])
            continue;
        if(v==V)
            return edge[i].w;
        else{
            vis[u]=true;
            int tmp=FindDep(v,V);
            vis[u]=false;
            if(tmp!=-1)
                ans=max(ans,max(tmp,edge[i].w));
        }
    }
    return ans;
}

int main(){
    memset(vis,false,sizeof(vis));
    cin>>n;
    for(int i=1;i<n;i++){
        int u,v,w;
        cin>>u>>v>>w;
        add(u,v,w);
        add(v,u,w);
        f[u][v]=f[v][u]=w;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            f[i][j]=FindDep(i,j);
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++)
            ans+=f[i][j];
    }
    cout<<ans<<endl;
    return 0;
}