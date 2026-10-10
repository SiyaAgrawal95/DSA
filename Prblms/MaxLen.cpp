#include <iostream>
#include<vector>
using namespace std;

int lengthOfLongestSubstring(string s) {

    vector<int> lastSeen(256, -1);

    int left = 0;
    int maxLen = 0;

    for (int right = 0; right < s.length(); right++) {

        if (lastSeen[s[right]] >= left) {
            left = lastSeen[s[right]] + 1;
        }

        maxLen = max(maxLen, right - left + 1);

        lastSeen[s[right]] = right;
    }

    return maxLen;
}

int main() {

    string s = "abcabcbb";

    cout << lengthOfLongestSubstring(s) << endl;

    return 0;
}