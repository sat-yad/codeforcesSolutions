#include <bits/stdc++.h>
// #include <stdio.h>
using namespace std;
const int N = 1e5 + 10;
void print_binary(int num)
{
    for (int i = 7; i >= 0; i--)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}
int main()
{
    // int n=INT_MAX;
    // int a=((1LL<<31)-1);
    // cout<<a<<endl;
    // cout<<n<<endl;
    // cout<<__builtin_popcount(n);
     int num;
    //  cin>>num;
     print_binary(101);
    //   print_binary(2);
    //    print_binary(8);
    //     print_binary(1);
    // for(int i=0;i<8;i++){
    // if((num &(1<<i)) !=0){
    //     cout<<"set"<<endl;
    // }else{
    //     cout<<"reset"<<endl;
    // }
    // }
    // // bit set

    // print_binary(num |(1<<3));

    // //unset bit

    // print_binary(num &(~(1<<1)));

    // //toggling in bit manupulation toggle ka matlab hota hai 1 ko 0 banana
    //  // and 0 ko 1 banana;

    // int a, i, cnt = 0;
    // cin>>a>>i;
    // print_binary(num^(a<<i));
    // // set bit count
    // for(int i=16;i>=0;i--){
    //     if((num&(1<<i)) !=0){
    //         cnt++;
    //     }
    // }
    // cout<<cnt<<endl;
    // if(num&1){
    //     cout<<"ODD"<<endl;
    // }
    // else{
    //     cout<<"EVEN"<<endl;
    // }

    // // by using left we get a number multiplied by 2
    // // by using right shift we get a number divide by 2

    // cout<<(num<<1)<<endl;
    // cout<<(num>>1)<<endl;
    // for(char i='A';i<'F';i++){
    //     cout<<" "<<i<<" ";
    //     print_binary(int(i));
    // }
    //  for(char i='a';i<'f';i++){
    //     cout<<" "<<i<<" ";
    //     print_binary(int(i));
    // }
    // cout << (1 << 1);

    //////// to convert lower case into upper and vice-versa
    //// so we know in the lower case and upper case the only differnece is
    // // in the 5th bit i.e. in the case of lowercase it is set and while
    //// int he case of upper it is reset
    //// so will make change only in the 5th by doing we can we converted
    // // lowecase into the upper case and vice -versa
    // char ch='Z';
    // cout<<char(int(ch) | (1<<5))<<endl;

    // similarly from lowercase to upper case

    // char h='n';
    // cout<<char(int(h) & (~(1<<5)))<<endl;

    // so this topic doesn't end here another cool method for converting
    // // upper case to lower case is doing or(|) with space whose ascii is
    // 32 so
    // cout<<char('X' | ' ')<<endl;

    // and similarly for lowercase to upper case is
    //  cout<<char('s' & (~(' ')))<<endl;
    // or another method for it is
    // cout<<char('p' & '_')<<endl;

    // // LSB'S clear
    // we can do this by doi
    // int v=4;  // (i+1)th bit tak no. zero takrna padega
    // int a = 59;
    // print_binary(a);
    // int b=(a & (~((1<<(v+1))-1)));
    // print_binary(b);
    // 3rd bit tak saari msb's clear chahiye to
    // int i = 5;
    // int c = (a & (1 << (i + 1)) - 1);
    // print_binary(c);

  // // to check whether number is in the 2 ki power or not 

    // int n=1;
    // print_binary(n);
    // print_binary(n-1);;
    // cout<<(n & (n-1))<<endl;
    // cin>>num;
    // if(num & (num-1)){
    //     cout<<"NOT IN 2'S power" <<endl;
    // }
    // else{
    //     cout<<"IT IS 2'S power"<<endl;
    // }
    int n=5;
    // int z=n&1;
    // cout<<z<<endl;
    int x=n<<0;
    cout<<x;
}

// 00001111NN
// 00000111
// 00000110N
// 00001001N
// 00000110
//
