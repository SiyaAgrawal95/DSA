#include <iostream>
#include<vector>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {

    sort(intervals.begin(), intervals.end());

    vector<vector<int>> ans;

    vector<int> current = intervals[0];

    for (int i = 1; i < intervals.size(); i++) {

        if (intervals[i][0] <= current[1]) {
            current[1] = max(current[1], intervals[i][1]);
        }
        else {
            ans.push_back(current);
            current = intervals[i];
        }
    }

    ans.push_back(current);

    return ans;
}

int main() {

    vector<vector<int>> intervals = {
        {1, 3},
        {2, 6},
        {8, 10},
        {15, 18}
    };

    vector<vector<int>> result = merge(intervals);

    for (auto interval : result) {
        cout << "[" << interval[0] << ", " << interval[1] << "]" << endl;
    }

    return 0;
}