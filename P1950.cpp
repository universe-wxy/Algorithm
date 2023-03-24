#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n,m;
    char map[1005][1005];
    bool visit[1005][1005];
    memset(visit,false,sizeof(visit));
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>map[i][j];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            if(map[i][j]=='.')
                visit[i][j]=true;
            else
                visit[i][j]=false;
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}