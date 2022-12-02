#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,b;
    cin>>n>>b;
    vector<int> high;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        high.push_back(temp);
    }
    sort(high.begin(),high.end());
    reverse(high.begin(),high.end());
    int cnt=0;
    int sum=0;
    while(sum<b){
        sum+=high[cnt++];
    }
    cout<<cnt<<endl;
    //fclose(stdin);
    //fclose(stdout);
    return 0;
}