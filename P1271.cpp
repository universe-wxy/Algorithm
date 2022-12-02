#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	int cnt[1000];
	memset(cnt,0,sizeof(cnt));
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++){
		int temp;
		scanf("%d",&temp);
		cnt[temp-1]++;
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<cnt[i];j++)
			printf("%d ",i+1);
	return 0;
}
