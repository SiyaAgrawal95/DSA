// #include<iostream>
// #include<vector>
// using namespace std;
// void printSubsets(vector<int> &arr,vector<int> &ans, int i){
//     if(i==arr.size()){
//         for(int val :ans){
//             cout<<val<<" ";
//         }
//         cout<<endl;
//         return;
//     }

//     ans.push_back(arr[i]);
//     printSubsets(arr, ans, i+1);

//     ans.pop_back();
//     printSubsets(arr , ans, i+1);
// }

// int main(){
//     vector<int>arr = {1,2,3};
//     vector<int>ans;

//     printSubsets(arr, ans, 0);
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

void getAllSubsets(vector<int>& nums, vector<int>& ans, int i,
                   vector<vector<int>>& allSubsets) {

    if (i == nums.size()) {
        allSubsets.push_back(ans);
        return;
    }

    // Include current element
    ans.push_back(nums[i]);
    getAllSubsets(nums, ans, i + 1, allSubsets);

    // Backtrack
    ans.pop_back();

    // Don't include current element
    getAllSubsets(nums, ans, i + 1, allSubsets);
}

vector<vector<int>> subsets(vector<int>& nums) {

    vector<vector<int>> allSubsets;
    vector<int> ans;

    getAllSubsets(nums, ans, 0, allSubsets);

    return allSubsets;
}

int main() {

    vector<int> nums = {1, 2, 3};

    vector<vector<int>> result = subsets(nums);

    for (auto subset : result) {
        cout << "[ ";

        for (int x : subset) {
            cout << x << " ";
        }

        cout << "]" << endl;
    }

    return 0;
}