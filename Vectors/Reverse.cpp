#include<iostream>
#include<vector>
using namespace std;
void reverseVector(vector<int>&vec){
    int n=vec.size();
    for(int i = n-1;i>=0;i--){
        cout<<vec[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i = 0;i<n;i++){
        cin>>vec[i];
    }
    reverseVector(vec);
}