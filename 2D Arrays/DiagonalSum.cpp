#include<iostream>
using namespace std;
int diagonalSum(int mat[][4] , int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum += mat[i][i];
        if(i!=n-i-1){
            sum += mat[i][n-i-1];
        }
    }
    return sum;
}

int main(){
     int mat[4][4];
    int rows = 4;
    int cols = 4;
    int n = 4;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>mat[i][j];
        }
    }

    cout<<diagonalSum(mat,n)<<endl;
    return 0;
}

// #include<iostream>
// using namespace std;
// int diagonalSum(int mat[][4] , int n){
//     int sum =0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j){
//                 sum += mat[i][j];
//             }
//             else if(j == n-i-1){
//                 sum += mat[i][j];
//             }
//         }
//     }
//     return sum;
// }

// int main(){
//      int mat[4][4];
//     int rows = 4;
//     int cols = 4;
//     int n = 4;

//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cin>>mat[i][j];
//         }
//     }

//     cout<<diagonalSum(mat,n)<<endl;
//     return 0;
// }