#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int>& A) {
    int st = 1, end = A.size() - 2;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (A[mid - 1] < A[mid] && A[mid] > A[mid + 1]) {
            return mid;
        }
        else if (A[mid - 1] < A[mid]) {
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n;
    cin >> n;

    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << peakIndexInMountainArray(A);

    return 0;
}