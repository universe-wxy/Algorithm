#include<bits/stdc++.h>

using namespace std;

struct Person{
	string name;
	int y,m,d;
	int num;
}a[105];
bool cmp(Person a,Person b){
	if(!(a.y==b.y)) return a.y<b.y;
	if(!(a.m==b.m)) return a.m<b.m;
	if(!(a.d==b.d)) return a.d<b.d;
	return a.num>b.num;
}
int main(){
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].name>>a[i].y>>a[i].m>>a[i].d;
		a[i].num=i;
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++)
		cout<<a[i].name<<endl;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}
