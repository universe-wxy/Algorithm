#include<bits/stdc++.h>

using namespace std;

class country{
    public:
        int num,ability;
        country(int x=0,int y=0){
            this->num=x;
            this->ability=y;
        }
};
country max(country a,country b){
    return a.ability>b.ability?a:b;
}
country min(country a,country b){
    return a.ability<b.ability?a:b;
}

int main()
{
    country a[100005];
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int n;
    cin>>n;
    for(int i=0;i<pow(2,n-1);i++){
        int x,y;
        cin>>x>>y;
        int pos=pow(2,n+1)-1-pow(2,n)+2*i;
        a[pos]=country(2*i+1,x);
        a[pos+1]=country(2*i+2,y);
    }
    for(int i=n-1;i>=0;i--){
        int pos=pow(2,i)-1;
        for(int j=0;j<pow(2,i);j++)
            a[pos+j]=max(a[(pos+j)*2+1],a[(pos+j)*2+2]);
    }
    cout<<min(a[1],a[2]).num<<endl;
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}