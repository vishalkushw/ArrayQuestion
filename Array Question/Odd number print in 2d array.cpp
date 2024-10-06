#include <iostream>
using namespace std;

int main() {
    int arr[3][3];

    cout << "Enter 9 values \n";
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            cin >> arr[r][c];
        }
    }

    cout << "\nEven numbers in the 2D array: \n";
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            if (arr[r][c] % 2 != 0) { 
                cout << arr[r][c] << " ";
            }
        }
    }
    cout << endl;

}
