#include <iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"Enter size of array : ";
	cin>>n;
	int arr[n];
	
	int size= sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size;i++){
		cout<<"Enter array index of "<<i<<" ";
		cin>>arr[i];
	}
	
	for(int i=0;i<size;i=i+2){
	    sum=sum+arr[i];		
	}
	cout<<"Sum of alternate array element is : "<<sum;
}
