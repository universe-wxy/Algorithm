#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t,c,s;
    cin>>t>>c>>s;
    int remain=s-c;
    double rate=(double)remain/(double)c;
    int ans=rate*t;
    cout<<ans;
    //fclose(stdin);
    //fclose(stdout);
    return 0;
}