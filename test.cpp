#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    string s;
    int cnt[128];
    memset(cnt,0,sizeof(cnt));
    int l=0,r=0;
    int maxlen=0,len=0;
    while(r!=s.length()-1){
        if(cnt[s[r]-'A']==0){
            cnt[s[r]-'A']++;
            len++;
            maxlen=max(maxlen,len);
            r++;
        }
        else{
            cnt[s[l]-'A']--;
            len--;
            l++;
        }
    }
    cout<<maxlen;
    fclose(stdin);
    fclose(stdout);
    return 0;
}