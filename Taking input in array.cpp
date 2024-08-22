// taking input in array

#include <iostream>
using namespace std;
int main(){
	int arr[5];	
	for(int i=0;i<5;i++){
		cout<<"Enter your array index : "<<i <<": ";
		cin>>arr[i];
	}
	
	for(int i=0;i<5;i++){
		cout<<"Your array index : "<<i <<": ";
		cout<<arr[i]<<endl;
	}
	
}
