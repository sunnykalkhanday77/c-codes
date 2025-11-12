#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {        // outer loop (rows)
        for (int j = 1; j <= i; j++) {    // inner loop (stars)
            cout << j<< " ";
        }
        cout << endl; // move to next row
    }

    return 0;
}
