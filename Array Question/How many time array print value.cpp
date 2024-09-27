#include <iostream>
using namespace std;
int main(){
	int arr[5];
	cout<<"Enter 5 value ";
	for (int i=0;i<5;i++){
		cout<<"Enter value of index number "<<i<<" ";
		cin>>arr[i];
	}
	cout<<"Data store in array"<<endl; 
	for (int i=0;i<5;i=i+2){
		cout<<arr[i]<<" ";
	}
	
}
