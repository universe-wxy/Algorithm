#include<bits/stdc++.h>

using namespace std;

int n,k_max;
string nums_str;
int f[105][105],a[105];

int cut(int st,int ed){
    int ans=0;
    for(int i=st;i<=ed;i++)
        ans=ans*10+a[i];
    return ans;z
}

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    cin>>n>>k_max; 
    cin>>nums_str;
    for(int i=0;i<n;i++){
        a[i]=nums_str[i]-'0';
        f[i][0]=a[i];
    }
    for(int i=2;i<=n;i++) 
        for(int k=1;k<=min(k_max,i-1);k++)
            for(int j=k;j<i;j++)
                f[i][k]=max(f[i][k],f[j][k-1]*cut(j+1,i));
    cout<<f[n][k_max]<<endl;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
