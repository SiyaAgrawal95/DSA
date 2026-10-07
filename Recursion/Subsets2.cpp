#include <iostream>
#include<vector>
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

    // Skip duplicate elements
    int idx = i + 1;

    while (idx < nums.size() && nums[idx] == nums[idx - 1]) {
        idx++;
    }

    // Don't include current element
    getAllSubsets(nums, ans, idx, allSubsets);
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {

    sort(nums.begin(), nums.end());

    vector<vector<int>> allSubsets;
    vector<int> ans;

    getAllSubsets(nums, ans, 0, allSubsets);

    return allSubsets;
}

int main() {

    vector<int> nums = {1, 2, 2};

    vector<vector<int>> result = subsetsWithDup(nums);

    for (auto subset : result) {

        cout << "[ ";

        for (int x : subset) {
            cout << x << " ";
        }

        cout << "]" << endl;
    }

    return 0;
}