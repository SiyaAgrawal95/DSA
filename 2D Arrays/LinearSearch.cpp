#include<iostream>
using namespace std;
bool linearSearch(int mat[][3] , int rows , int cols , int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(mat[i][j]==key){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int mat[4][3];
    int rows = 4;
    int cols = 3;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>mat[i][j];
        }
    }
cout<<linearSearch(mat,rows,cols,8);
    return 0;
}