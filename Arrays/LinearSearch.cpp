#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};  
    int key = 30;  

    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {
            cout << "Found at index " << i;
            return 0;   // stop program once found
        }
    }

    cout << "Not found";
    return 0;
}
