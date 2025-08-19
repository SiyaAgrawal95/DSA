#include<iostream>
using namespace std;
void uniqueVal(int arr[],int n){
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j = 0; j<n;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int arr[] = {3,4,5,6,4,3};
    int n = 6;
    uniqueVal(arr,n);
    return 0;

}