#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
	while(t--){
	     int n;
	     cin>>n;
	     int arr[5000];
	     int arr1[n];
	     for(int i=0;i<n;i++){
	         cin>>arr[i];
	     }
	     int j=0;
         int count=0;
	     for(int i=0;i<n;i++){
	         if(arr[i]>=1000){
                count++;
	        //        arr1[j] =arr[i];
	        //         j++;
	          }
	     }
         cout<<count<<endl;

	    //  for(int i=0;i<j;i++){
	    //      cout<<arr1[i]<<" ";
	    //  }
	     
	}
	return 0;
}