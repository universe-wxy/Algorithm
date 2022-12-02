#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	vector<int> a;
	int temp;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		a.push_back(temp);
	}
	sort(a.begin(),a.begin()+n);
	printf("%d",a[k]);
	return 0;
}
