#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& A) {
    int pivot = -1, n = A.size();

    // Find pivot
    for (int i = n - 2; i >= 0; i--) {
        if (A[i] < A[i + 1]) {
            pivot = i;
            break;
        }
    }

    // If no pivot, reverse the entire array
    if (pivot == -1) {
        reverse(A.begin(), A.end());
        return;
    }

    // Find the smallest element greater than A[pivot]
    for (int i = n - 1; i > pivot; i--) {
        if (A[i] > A[pivot]) {
            swap(A[i], A[pivot]);
            break;
        }
    }

    // Reverse the elements after pivot
    int i = pivot + 1, j = n - 1;

    while (i <= j) {
        swap(A[i++], A[j--]);
    }
}

int main() {
    vector<int> A = {1, 2, 3};

    nextPermutation(A);

    cout << "Next Permutation: ";

    for (int x : A) {
        cout << x << " ";
    }

    return 0;
}