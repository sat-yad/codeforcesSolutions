#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,r2,r3,v1,v2;cin>>r1>>r2>>r3>>v1>>v2;
    int a[2][3];
     a[0][0]=r1+r2,a[0][1]=r2,a[0][2]=-(v1+v2),a[1][0]=r2,a[1][1]=(r3+r2),a[1][2]=-v1;
     double i1=(-a[0][2]*a[1][1]-a[0][1]*a[1][2])/(a[0][0]*a[1][1]-a[0][1]*a[1][0]),i2=(-a[1][0]*a[0][2]+a[1][2]*a[0][0])/(a[0][1]*a[1][0]-a[1][1]*a[0][0]),i=i1+i2;
     cout<<i<<" "<<i1<<" "<<i2<<endl;
     
}

