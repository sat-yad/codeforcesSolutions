#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x%3==0){
	        cout<<0;
	    }
	    else{
	        int n=((x/3)+1)*3;
	        cout<<n-x;
	         
	    }
	}
	return 0;
}