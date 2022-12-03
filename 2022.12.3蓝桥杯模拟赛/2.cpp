#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n;
    vector<string> a;
    cin>>n;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        if(find(a.begin(),a.end(),temp)==a.end())
            a.push_back(temp);
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
    fclose(stdin);
    fclose(stdout);
    return 0;
}