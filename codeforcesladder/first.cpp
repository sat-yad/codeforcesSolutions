#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,z;
    cout<<"Enter the number of blocks"<<endl;cin>>n;
    cout<<"Enter the number of Process"<<endl;cin>>m;
    int  v1[n],v2[m],v3[m];
    cout<<"Enter the block size"<<endl;
    for(int i=0;i<n;i++){
       cin>>v1[i];
    }
    cout<<"Enter the processes size"<<endl;
    for(int i=0;i<m;i++){
        cin>>v2[i];
        v3[i]=-1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v2[i]<=v1[j] ) {
                v3[i]=j+1;
                v1[j]=INT_MIN;
                break;
            }
        }
    }
    cout<<"-1 denotes that the memory is not allocated for some process\n";
    cout<<"Process\t\tBlock\n";
    for(int i=0;i<m;i++){
        cout<<v2[i]<<"\t\t"<<v3[i]<<endl;
    }
}