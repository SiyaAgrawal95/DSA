#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isAlphaNum(char ch) {
    if ((ch >= '0' && ch <= '9') ||
        (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
        return true;
    }
    return false;
}

bool isPalindrome(string s) {
    int st = 0, end = s.size() - 1;

    while (st < end) {

        if (!isAlphaNum(s[st])) {
            st++;
            continue;
        }

        if (!isAlphaNum(s[end])) {
            end--;
            continue;
        }

        if (tolower(s[st]) != tolower(s[end])) {
            return false;
        }

        st++;
        end--;
    }

    return true;
}

int main() {
    string s;
    getline(cin, s);

    if (isPalindrome(s)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}

// class Solution {
// public:
//     bool isPalindrome(string s)
//     {
        
//         int Left = 0;
//         int Right = s.size() - 1;
//         bool aphanumberic = false;
        
        
        
        
//         while (Left < Right)
//         {
//             while (!isalnum(s[Left]) && Left < Right)
//             {
//                 Left++;
//             }
            

//             while (!isalnum(s[Right]) && Left < Right)
//             {
//                 Right--;
//             }


//             if (tolower(s[Left]) != tolower(s[Right]))
//             {
//                 return false;
//             }


//             Left++;
//             Right--;
//         }

//         return true;

//     }
// };