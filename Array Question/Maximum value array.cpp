#include <iostream>
using namespace std;
int main(){
	int arr[5];
	int mx=arr[0];
	cout<<"Enter 5 value ";
	for (int i=0;i<5;i++){
		cout<<"Enter value of index number "<<i<<" ";
		cin>>arr[i];
	}	
	for(int i=1;i<5;i++)
		if (arr[i]>mx) {
		mx=arr[i];
	}
	cout<<"Maximum value is : "<<mx;
}
