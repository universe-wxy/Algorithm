#include<bits/stdc++.h>

using namespace std;

int vis[1000005];

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    vector<int> days;
    int n;
    int cnt;
    cin>>n;
    memset(vis,0,sizeof(vis));
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        days.push_back(temp);
        vis[temp]++;
        if(i==0){
        	cnt=temp;
        	continue;
		}
        if(vis[temp]>=2){
            cnt+=0;
            continue;
        }
        for(int j=1;j<1000005;j++){
            if(temp+j>=1000005&&temp-j<0)
                continue;
            if(temp+j<1000005&&temp-j>=0){
                if(vis[temp+j]||vis[temp-j]){
                    cnt+=j;
                    break;
                }
            }
            else if(temp+j>1000005){
                if(vis[temp-j]){
                    cnt+=j;
                    break;
                }
            }
            else if(vis[temp+j]){
                    cnt+=j;
                    break;
                }
        }
    }
    
    cout<<cnt<<endl;
    //fclose(stdin);
    //fclose(stdout);
    return 0;
}
