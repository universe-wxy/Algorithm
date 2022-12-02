#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen('in.txt','r',stdin);
    freopen('out.txt','w',stdout);
    int n;
    cin>>n;
    int a[1005];
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector<int> diff;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            diff.push_back(abs(a[i]-a[j]));
    for(int i=0;i<diff.size();i++){
        for(int j=0;j<n;j++)
        
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}