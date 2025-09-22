#include <iostream>
using namespace std;

int main() {
    int rows = 4;

    for (int i = rows; i >= 1; i--) {
        // Print spaces
        for (int j = 0; j < rows - i; j++) {
            cout << "  ";
        }
        // Print stars
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
