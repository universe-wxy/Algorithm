#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string temp,max="";
	int num=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		if(temp.size()>max.size()||(temp.size()==max.size()&&temp>max)){
			max=temp;
			num=i;
		}
	}
	cout<<num+1<<endl<<max;
	return 0;
}
