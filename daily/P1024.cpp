#include<bits/stdc++.h>

using namespace std;

double a,b,c,d;
double f(double x){
    return a*pow(x,3)+b*pow(x,2)+c*pow(x,1)+d;
}

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    vector<double> xs;
    int cnt=0;
    cin>>a>>b>>c>>d;
    for(int i=-100;i<=100&&xs.size()<3;i++){
        if(f(i)==0){
            xs.push_back(i);
            continue;
        }
        if(f(i)*f(i+1)>=0)
            continue;
        double l=i;
        double r=i+1;
        while(r-l>=0.001){
            double mid=(l+r)/2;
            if(f(r)*f(mid)<=0)
                l=mid;
            else
                r=mid;
        }
        xs.push_back(r);
    }
    for(int i=0;i<xs.size();i++)
        printf("%.2lf ",xs[i]);
    fclose(stdin);
    fclose(stdout);
    return 0;
}