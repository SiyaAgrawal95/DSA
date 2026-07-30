#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> &arr, int n, int C, int minAllowedDist){
    int cows = 1, lastStallPos = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-lastStallPos >= minAllowedDist){
             cows++;
            lastStallPos = arr[i];
        }

        if(cows==C){
            return true;
        }
    }
    return false;
}
int getDistance(vector<int> &arr, int n, int C){
    sort(arr.begin(),arr.end());
    int st=1, end = arr[n-1]-arr[0] , ans = -1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(isPossible(arr,n,C,mid)){
            ans = mid;
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}
int main(){
    int n = 5, C=3;
    vector<int>arr = {1,2,4,8,9};

    cout<<getDistance(arr,n,C)<<endl;
    return 0;
}