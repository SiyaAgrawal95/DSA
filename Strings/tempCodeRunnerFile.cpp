
#include <bits/stdc++.h>
#include<vector>
using namespace std;


int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    unordered_map<string, vector<string>> mp;

    for (int i = 0; i < strs.size(); i++) {
        string s = strs[i];

        sort(s.begin(), s.end());

        mp[s].push_back(strs[i]);
    }

    vector<vector<string>> ans;

    for (auto it : mp) {
        ans.push_back(it.second);
    }

    
    for (auto group : ans) {
        cout << "[ ";
        for (auto word : group) {
            cout << word << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
