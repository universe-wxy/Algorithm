#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=91;
    freopen("out.txt","r",stdin);
    vector<string> mine;
    for(int i=0;i<=n;i++){
        string temp;
        cin>>temp;
        mine.push_back(temp);
    }
    fclose(stdin);
    freopen("std.txt","r",stdin);
    vector<string> std;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        std.push_back(temp);
    }
    fclose(stdin);
    freopen("diff.txt","w",stdout);
    for(int i=0;i<n;i++)
        if(mine[i]!=std[i])
            cout<<i<<" "<<mine[i]<<" "<<std[i]<<endl;
    fclose(stdout);
}