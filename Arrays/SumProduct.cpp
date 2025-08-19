#include<iostream>
using namespace std;
void sumProduct(int arr[],int n){
    int sum = 0, product = 1;


    for(int i=0;i<n;i++){
        sum = sum+arr[i];
        product = product*arr[i];
    }
    cout<<"sum ="<<sum<<endl;
    cout<<"product = "<<product<<endl;

}
int main(){
    int arr[] = {2,3,5,6,7};
    int n = 4; 

    sumProduct(arr,n);
    return 0;
}