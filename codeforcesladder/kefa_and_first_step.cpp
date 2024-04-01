#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast   ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(nullptr); cout.tie(nullptr);
void solve(){
    ll n;
    cin>>n;
    ll arr[100000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maximum=arr[0];
    int sub_max=1;
    int sub=1;
    for(int i=1;i<n;i++){
        if(maximum<=arr[i]){
          maximum=arr[i];
          sub_max++;
          sub= max(sub_max,sub);
        }
        else{
            maximum=arr[i];
            sub_max=1;
        }
    }
    cout<<sub<<endl;
}

int main(){
    fast;
 solve();
}
// #include<bits/stdc++.h>
// using namespace std;

// long long int shubham(long long int arr[],long long int n){
// 	int max = 1, len = 1;
// 	for (int i = 1; i < n;i++){
// 		if(arr[i]>=arr[i-1]){
// 			len++;
//         }
// 			else{
// 				if(max<len){
// 					max = len;
// 					len = 1;
// 				}
// 			}
// 	}
// 	return max;
//     }


// int main(){
// 	 int n;
// 	cin >> n;
// 	long long  arr[n];
// 	for (int i = 0; i < n;i++){
// 		cin >> arr[i];
// 	}

// 	cout << shubham(arr, n);
// }