#include<bits/stdc++.h>
using namespace std;

void reverseArr(int arr[],int n){
    int start = 0 ;
    int end = n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[] = {1,3,5,2,4,6};
    int n = 6;

    reverseArr(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}