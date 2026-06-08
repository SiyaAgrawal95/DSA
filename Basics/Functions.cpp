// #include<bits/stdc++.h>
// using namespace std;
// int SumN(int n){
//     int sum = 0;
//     for(int i=0;i<=n;i++){
//         sum = sum+i;
//     }
//     return sum;
// }
// int main(){
    
//     cout<<SumN(10)<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int sumDigit(int num){
//     int sum = 0;
//     while(num>0){
//         int lastdigit = num%10;
//         num = num/10;
//         sum = sum+lastdigit;
//     }
//     return sum;
// }
// int main(){
//     cout<<sumDigit(145);
// }

// #include<bits/stdc++.h>
// using namespace std;
// void primeNo(int n){
//     bool isPrime = true;

//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             isPrime = false;
//             break;
//         }
//     }
//     if(isPrime){
//         cout<<"Prime"<<endl;
//     }
//     else{
//         cout<<"Not"<<endl;
//     }
// }
// int main(){
//     primeNo(7);
// }

// #include<bits/stdc++.h>
// using namespace std;
// void primeNo(int n){
    
//     for(int i=2;i<n;i++){
//         bool isPrime = true;
//         for(int j=2;j<i;j++){
//         if(i%j==0){
//             isPrime = false;
//             break;
//         }
//     }
//     if(isPrime){
//         cout<<i<<endl;
//     }
// }
    
// }
// int main(){
//     primeNo(10);
// }

#include<bits/stdc++.h>
using namespace std;
void fibo(int n){
    int a=0,b=1,next;
    if(n==0){
        cout<<a;
        return;
    }

    for(int i=2;i<=n;i++){
        next = a+b;
        a = b;
        b = next;
    }
    cout<<b;
}
int main(){
    fibo(6);
}