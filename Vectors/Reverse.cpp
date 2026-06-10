#include<bits/stdc++.h>
using namespace std;
void reverseVec(vector<int>&vec){
    int start = 0;
    int end = vec.size() - 1;

    while(start<end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }

}

int main(){

    int n;
    cin>>n;

    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    reverseVec(vec);

    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}