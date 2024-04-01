// #include <bits/stdc++.h>
// using namespace std;
// int count(int c){
//       int count=0;
//       while(c!=0){
//         int d=c%10;
//         count++;
//         c/=10;
//       }
//       return count;
// }
// int main(){
//     long long n;
//     cin>>n;
//    long long sum=0;
//    long long  i=1;
//    for(;i<=n;i++){
//     sum+=count(i);
//    }
//   cout<<sum<<endl;
// }
 #include <bits/stdc++.h>
 using namespace std;

 int main(){
    long long  n;
    cin>>n;
    if(n<10){
		cout<<n<<endl;
	}
    else if(n<100){
		cout<<2*(n+1)-11<<endl;;
	}
    else if(n<1000){
		cout<<3*(n+1)-111<<endl;
	}
    else if(n<10000){
		cout<<4*(n+1)-1111<<endl;
	}
    else if(n<100000){
		cout<<5*(n+1)-11111<<endl;
	}
    else if(n<1000000){
		cout<<6*(n+1)-111111<<endl;
	}
    else if(n<10000000){
		cout<<7*(n+1)-1111111<<endl;
	}
    else if(n<100000000){
		cout<<8*(n+1)-11111111<<endl;
	}
    else if(n<1000000000){
		cout<<9*(n+1)-111111111<<endl;
	}
    else if(n<10000000000){
		cout<<10*(n+1)-1111111111<<endl;
	}
	return 0;
}
