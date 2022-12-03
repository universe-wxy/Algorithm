#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    char s[105][105];
    memset(s,0,sizeof(s));
    int n,m;
    int cnt=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>s[i][j];
    for(int i=2;i<=n-1;i++)
        for(int j=2;j<=m-1;j++){
            for(int l=1;i-l>=1&&i+l<=n&&j-l>=1&&j+l<=n;l++){
                if(s[i][j]==s[i-l][j-l]&&s[i][j]==s[i-l][j+l]&&s[i][j]==s[i+l][j-l]&&s[i][j]==s[i+l][j+l])
                    cnt++;
            }
        }
    cout<<cnt<<endl;
    //fclose(stdin);
    //fclose(stdout);
    return 0;
}