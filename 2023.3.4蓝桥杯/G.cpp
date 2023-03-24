#include<bits/stdc++.h>
using namespace std;
#define MAXN 200005
int a[MAXN];
priority_queue<int> minn;
int cnt;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]==0)
            minn.push(-a[i]);
        else{
            vector<int> list;
            while(!minn.empty()&&minn.top()==a[i]){
                list.push_back(minn.top());
                minn.pop();
            }
            if(minn.empty()){
                minn.push(a[i]);
                cnt++;
            }
            else{
                minn.pop();
                minn.push(a[i]);
            }
            for(int j=0;j<list.size();j++)
                minn.push(list[j]);
        }
    }
    cout<<minn.size()<<endl;
    return 0;
}