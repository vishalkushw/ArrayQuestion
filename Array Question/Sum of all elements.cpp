#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    int sum = 0; 

    cout << "Enter 9 values \n";
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            cin >> arr[r][c];
            sum += arr[r][c]; 
        }
    }

    cout << "\nStored data in 2D:\n";
    
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            cout << arr[r][c] << " ";
        }
        cout << endl;
    }

    cout << "Sum of all elements: " << sum << endl;

}
