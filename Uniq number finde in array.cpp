#include<iostream>
using namespace std;
int main(){
	int arr[]={5,11,5,11,2,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		int j;
		for(j=0;j<i;j++){
			if(arr[i]==arr[j])
			break;
		}
			if(i==j)
			cout<<arr[i]<<" ";	
		}
	}
