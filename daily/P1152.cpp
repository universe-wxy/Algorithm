#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n;
    cin>>n;
    int a[1005];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int c[1005];
    for(int i=1;i<n;i++)
        c[i]=abs(a[i]-a[i-1]);
    sort(c+1,c+n);
    for(int i=1;i<n;i++){
        if(c[i]!=i){
            cout<<"Not jolly"<<endl;
            return 0;
        }
    }
    cout<<"Jolly"<<endl;
    //fclose(stdin);
    //fclose(stdout);
    return 0;
}