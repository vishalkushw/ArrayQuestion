//Find the first second and third highest eliment in the array

#include <iostream>
using namespace std;

int main() {
    int A[6] = {945, 666, 29, 56, 322, 711};
    int high, shigh, thigh;

    if (A[0] > A[1]) {
        high = A[0];
        shigh = A[1];
        thigh = A[2];  
    }
    
	 else if (A[1] > A[0]) {
        high = A[1];
        shigh = A[0];
        thigh = A[2];
    } 
	else {
        high = A[2];
        shigh = A[0];
        thigh = A[1];
    }

    for(int i=3; i<6; i++) {
        if (A[i] > high) {
            thigh = shigh;
            shigh = high;
            high = A[i];
        } 
        
		else if (A[i] > shigh && A[i] != high) {
            thigh = shigh;
            shigh = A[i];
        } 
		else if (A[i] > thigh && A[i] != shigh && A[i] != high) {
            thigh = A[i];
        }
    }

    cout << "Highest: " << high << endl;
    cout << "Second Highest: " << shigh << endl;
    cout << "Third Highest: " << thigh;
}


