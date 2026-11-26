#include <iostream>
using namespace std;

bool canAliceWin(int n) {
    int stones = 10;
    bool aliceTurn = true;

    while (n >= stones) {
        n -= stones;
        stones--;

        aliceTurn = !aliceTurn;
    }

    return !aliceTurn;
}

int main() {
    int n = 12;

    if (canAliceWin(n)) {
        cout << "Alice wins";
    }
    else {
        cout << "Bob wins";
    }

    return 0;
}