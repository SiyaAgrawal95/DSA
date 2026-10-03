#include <iostream>
#include<vector>
using namespace std;

bool search(vector<vector<char>>& board, string& word, int i, int j, int index) {

    // Out of bounds
    if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size()) {
        return false;
    }

    // Character doesn't match
    if (board[i][j] != word[index]) {
        return false;
    }

    // Entire word found
    if (index == word.length() - 1) {
        return true;
    }

    // Mark current cell as visited
    char original = board[i][j];
    board[i][j] = '#';

    bool found =
        search(board, word, i - 1, j, index + 1) ||
        search(board, word, i + 1, j, index + 1) ||
        search(board, word, i, j + 1, index + 1) ||
        search(board, word, i, j - 1, index + 1);

    // Backtracking: restore original character
    board[i][j] = original;

    return found;
}

bool exist(vector<vector<char>>& board, string word) {

    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[0].size(); j++) {

            if (board[i][j] == word[0]) {

                if (search(board, word, i, j, 0)) {
                    return true;
                }
            }
        }
    }

    return false;
}

int main() {

    vector<vector<char>> board = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}
    };

    string word = "ABCCED";

    if (exist(board, word)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}