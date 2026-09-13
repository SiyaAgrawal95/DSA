#include<iostream>
using namespace std;
int getMaxSum(int mat[][3] , int rows, int cols){
    int maxRowSum = INT_MIN;
    for(int i=0;i<rows;i++){
        int rowSum = 0;
        for(int j=0;j<cols;j++){
            rowSum += mat[i][j];
        }

        maxRowSum = max(maxRowSum,rowSum);
    }
    return maxRowSum;
}

int main(){
       int mat[4][3];
    int rows = 3;
    int cols = 3;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>mat[i][j];
        }
    }
    cout<<getMaxSum(mat,rows,cols)<<endl;
    return 0;
}