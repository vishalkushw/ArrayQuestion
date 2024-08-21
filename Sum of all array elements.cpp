//Calculate the sum of all the elements in the given array
#include <iostream>
using namespace std;
int main(){
	int sum=0;
	int arr[]={1,3,4,5,6,9,6,8,4};
	int n= sizeof(arr)/4;

	for(int i=0;i<n;i++){
		sum=sum+arr[i];	
	}
	cout<<"Sum of all array element is : "<<sum;
}
