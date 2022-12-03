#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    const char* str;
    string c;
    cin>>c;
    str=c.c_str();
    char outcome[105];
    int len=c.length();
    for(int i=0;i<len;i++)
        outcome[i]=str[i];
    for(int i=0;i<len;i++){
        if(c[i]==c[len-1]){
            bool flag=true;
            for(int l=1;l<len-1-i;l++)
                if(c[i+l]!=c[len-1-l]){
                    flag=false;
                    break;
                }
            if(flag){
                for(int k=i-1;k>=0;k--)
                    outcome[len+i-k-1]=c[k];
                len+=i;
                break;
            }
        }
    }
    for(int i=0;i<len;i++)
        cout<<outcome[i];
    //fclose(stdin);
    //fclose(stdout);
    return 0;
}