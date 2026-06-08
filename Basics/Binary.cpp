// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int decNum = 6;
//     int ans = 0;
//     int power = 1;
//     while(decNum>0){
//         int remainder = decNum%2;
//         decNum = decNum/2;

//         ans = ans+ (remainder*power);
//         power = power*10;
//     }
//     cout<<ans<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void toBinNum(int binNum){
    int ans = 0;
    int power = 1;
    while(binNum>0){
        int rem = binNum%10;
        binNum = binNum/10;

        ans = ans +(rem*power);
        power = power*2;
    }
    cout<<ans<<endl;
}
int main(){
    toBinNum(101);
}