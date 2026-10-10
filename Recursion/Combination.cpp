#include <iostream>
#include<vector>
#include<set>
using namespace std;

set<vector<int>> s;

void getAllCombinations(vector<int>& arr, int idx, int target,
                        vector<vector<int>>& ans, vector<int>& combi) {

    if (idx == arr.size() || target < 0) {
        return;
    }

    if (target == 0) {
        if (s.find(combi) == s.end()) {
            ans.push_back(combi);
            s.insert(combi);
        }
        return;
    }

    // Include current element
    combi.push_back(arr[idx]);

    // Move to the next index
    getAllCombinations(arr, idx + 1, target - arr[idx], ans, combi);

    // Reuse the current element
    getAllCombinations(arr, idx, target - arr[idx], ans, combi);

    // Backtrack
    combi.pop_back();

    // Exclude current element
    getAllCombinations(arr, idx + 1, target, ans, combi);
}

vector<vector<int>> combinationSum(vector<int>& arr, int target) {

    vector<vector<int>> ans;
    vector<int> combi;

    s.clear();

    getAllCombinations(arr, 0, target, ans, combi);

    return ans;
}

int main() {

    vector<int> arr = {2, 3, 6, 7};
    int target = 7;

    vector<vector<int>> result = combinationSum(arr, target);

    for (auto combination : result) {
        cout << "[ ";

        for (int x : combination) {
            cout << x << " ";
        }

        cout << "]" << endl;
    }

    return 0;
}