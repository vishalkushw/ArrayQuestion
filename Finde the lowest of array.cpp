//write a program finde the lowest of array
#include <iostream>
using namespace std;
int main(){

	int A[6]={4,91,61,-3,120,5};
    int low=A[0];
	
	for (int i=1;i<6;i++){
		if(A[i]<low){
			low=A[i];	
		}	
	}
	cout<<low;
}
