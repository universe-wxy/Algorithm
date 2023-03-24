#include<bits/stdc++.h>
using namespace std;

long long NextPrime(long long n){
    long long i;
    for(i=n+1;;i++){
        long long j;
        for(j=2;j*j<=i;j++){
            if(i%j==0)
                break;
        }
        if(j*j>i)
            break;
    }
    return i;
}

int main(){
    long long n;
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    cin>>n;
    cout<<NextPrime(n);
    fclose(stdin);
    fclose(stdout);
    return 0;
}