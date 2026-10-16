#include <iostream>
#include<vector>
using namespace std;

int mergeSort(vector<int>& nums, int st, int end) {

    if (st >= end) {
        return 0;
    }

    int mid = st + (end - st) / 2;
    int count = 0;

    count += mergeSort(nums, st, mid);
    count += mergeSort(nums, mid + 1, end);

    // Count reverse pairs
    int j = mid + 1;

    for (int i = st; i <= mid; i++) {
        while (j <= end && (long long)nums[i] > 2LL * nums[j]) {
            j++;
        }

        count += j - (mid + 1);
    }

    // Merge the two sorted halves
    vector<int> temp;
    int i = st;
    j = mid + 1;

    while (i <= mid && j <= end) {
        if (nums[i] <= nums[j]) {
            temp.push_back(nums[i]);
            i++;
        }
        else {
            temp.push_back(nums[j]);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(nums[i]);
        i++;
    }

    while (j <= end) {
        temp.push_back(nums[j]);
        j++;
    }

    for (int k = 0; k < temp.size(); k++) {
        nums[st + k] = temp[k];
    }

    return count;
}

int reversePairs(vector<int>& nums) {
    return mergeSort(nums, 0, nums.size() - 1);
}

int main() {

    vector<int> nums = {1, 3, 2, 3, 1};

    cout << reversePairs(nums) << endl;

    return 0;
}