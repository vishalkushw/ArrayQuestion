//Find the maximum value out of all the elements in the given array
#include <iostream>
using namespace std;
int main(){
	int arr[]={1,3,7,9,5};
	int n= sizeof(arr)/4;
	int mx= arr[0];

	for(int i=0;i<n;i++){
		if (arr[i]>mx) {
		mx=arr[i];
	}
	}
	cout<<"Maximum Value is : "<<mx;
}
