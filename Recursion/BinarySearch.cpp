#include <iostream>
#include<vector>
using namespace std;

int binSearch(vector<int>& nums, int target, int st, int end) {

    if (st <= end) {

        int mid = st + (end - st) / 2;

        if (nums[mid] == target) {
            return mid;
        }

        else if (nums[mid] >= target) {
            return binSearch(nums, target, st, mid - 1);
        }

        else {
            return binSearch(nums, target, mid + 1, end);
        }
    }

    return -1;
}

int search(vector<int>& nums, int target) {
    return binSearch(nums, target, 0, nums.size() - 1);
}

int main() {

    vector<int> nums = {1, 3, 5, 7, 9, 11};
    int target = 7;

    int result = search(nums, target);

    cout << "Index: " << result << endl;

    return 0;
}