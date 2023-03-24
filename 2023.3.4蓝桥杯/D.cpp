#include<bits/stdc++.h>
using namespace std;
long long coutNum(int n){
	long long ans=1;
	for(int i=n-1;i>=1;i--)
		ans*=i;
	return ans%998244353;
}
int main(){
	int n;
	cin>>n;
	long long count=coutNum(n);
	cout<<count<<endl;
	return 0;
}
