#include <iostream>
using namespace std;
int main(){
	int arr[5];
	int min=arr[0];
	cout<<"Enter 5 value ";
	for (int i=0;i<5;i++){
		cout<<"Enter Value of index number "<<i<<" ";
		cin>>arr[i];
	}
	for(int i=0;i<5;i++){
		if (arr[i]==0) 
		arr[i] = -1;
	    cout<<arr[i] <<" ";
	}	
}
