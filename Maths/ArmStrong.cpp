#include <iostream>
using namespace std;

bool isArmStrong(int n) {
    int copyN = n;
    int sumOfCubes = 0;

    while (n != 0) {
        int dig = n % 10;
        sumOfCubes += dig * dig * dig;

        n = n / 10;
    }

    return sumOfCubes == copyN;
}

int main() {
    int n = 153;

    if (isArmStrong(n)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}