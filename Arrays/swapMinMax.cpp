#include<iostream>
using namespace std;
void swapMinMax(int arr[], int n){
   int maxIndex = 0;
   int minIndex= 0;
   for(int i=0;i<n;i++){
    if(arr[i]<arr[minIndex]){
        minIndex = i;
    }
    if(arr[i]>arr[maxIndex]){
        maxIndex = i;
    }
   }

   int temp = arr[minIndex];
   arr[minIndex] = arr[maxIndex];
   arr[maxIndex] = temp;
}

int main(){
    int arr[] = {4,3,6,7,0,9};
    int n = 6;

    swapMinMax(arr,n);
    cout<<"Array after swapping :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}