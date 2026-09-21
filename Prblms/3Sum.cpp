#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        int j = i + 1;
        int k = n - 1;

        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];

            if (sum < 0) {
                j++;
            }
            else if (sum > 0) {
                k--;
            }
            else {
                ans.push_back({nums[i], nums[j], nums[k]});

                j++;
                k--;

                while (j < k && nums[j] == nums[j - 1]) {
                    j++;
                }
            }
        }
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> ans = threeSum(nums);

    for (auto triplet : ans) {
        cout << "[";
        for (int i = 0; i < 3; i++) {
            cout << triplet[i];
            if (i < 2)
                cout << ",";
        }
        cout << "] ";
    }

    return 0;
}