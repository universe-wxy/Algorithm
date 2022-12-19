#include<bits/stdc++.h>

using namespace std;

int a[100005];

int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int n;
    int cnt=0,temp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(i==0){
            cnt+=temp;
            a[i]=temp;
            continue;
        }
        int j=i-1;
        while(j>=0&&a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[++j]=temp;
        if(j==0)
            cnt+=abs(a[1]-temp);
        else if(j==i)
            cnt+=abs(a[i-1]-temp);
        else
            cnt+=min(abs(a[j+1]-temp),abs(a[j-1]-temp));
    }
    cout<<cnt<<endl;
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
