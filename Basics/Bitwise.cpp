//find out if a number is a power of 2 without any loop

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     if(n>0 && (n&(n-1)) == 0){
//         cout<<"Power of 2"<<endl;
//     }
//     else{
//         cout<<"Not a power of 2"<<endl;
//     }
//     return 0;
// }

//write a function to reverse an integer

#include<bits/stdc++.h>
using namespace std;
int reverseInt(int n){
    int rev;
    while(n!=0){
        int digit = n%10;
        rev = rev*10 + digit;
        n = n/10;
    }
    return rev;
}
int main(){
    int n;
    cin>>n;

    cout<<reverseInt(n);
}