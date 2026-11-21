#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> ans;
vector<int> ds;

void solve(int start, int target, vector<int>& candidates) {

    if (target == 0) {
        ans.push_back(ds);
        return;
    }

    for (int i = start; i < candidates.size(); i++) {

        if (i > start && candidates[i] == candidates[i - 1]) {
            continue;
        }

        if (candidates[i] > target) {
            break;
        }

        ds.push_back(candidates[i]);

        solve(i + 1, target - candidates[i], candidates);

        ds.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

    sort(candidates.begin(), candidates.end());

    solve(0, target, candidates);

    return ans;
}

int main() {
    vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;

    vector<vector<int>> result = combinationSum2(candidates, target);

    for (auto v : result) {
        cout << "[ ";
        for (int x : v) {
            cout << x << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}