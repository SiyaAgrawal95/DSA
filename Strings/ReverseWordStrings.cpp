// #include <iostream>
// #include <string>
// using namespace std;

// string reverseWords(string s) {
//     string ans = "";
//     int i = s.size() - 1;

//     while (i >= 0) {

//         // Skip spaces
//         while (i >= 0 && s[i] == ' ') {
//             i--;
//         }

//         if (i < 0)
//             break;

//         // Mark the end of the word
//         int end = i;

//         // Move left until we find a space
//         while (i >= 0 && s[i] != ' ') {
//             i--;
//         }

//         // Extract the word
//         string word = s.substr(i + 1, end - i);

//         // Add space between words
//         if (!ans.empty()) {
//             ans += ' ';
//         }

//         ans += word;
//     }

//     return ans;
// }

// int main() {
//     string s;

//     getline(cin, s);

//     cout << reverseWords(s);

//     return 0;
// }

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseWords(string s) {
    int n = s.length();
    string ans = "";

    // Reverse the entire string
    reverse(s.begin(), s.end());

    for (int i = 0; i < n; i++) {

        string word = "";

        // Extract each word
        while (i < n && s[i] != ' ') {
            word += s[i];
            i++;
        }

        // Reverse the individual word
        reverse(word.begin(), word.end());

        // Add word to answer
        if (word.length() > 0) {
            ans += " " + word;
        }
    }

    return ans.substr(1);
}

int main() {
    string s;

    getline(cin, s);

    cout << reverseWords(s);

    return 0;
}