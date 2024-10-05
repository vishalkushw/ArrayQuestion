#include <iostream>
using namespace std;
int main(){
	int n ,swap;
	cout<<"Enter size of array : ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"Enter array index of : "<<i<<" ";
		cin>>arr[i];
	}
	cout<<"Original Array : ";
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	     	
	cout<<"\n Duplicate value : ";
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				cout<<arr[i]<<" ";
				break;
			}
		}
	}

	
}
