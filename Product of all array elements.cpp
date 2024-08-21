//Calculate the product of all the elements in the given array
#include <iostream>
using namespace std;
int main(){
	int sum=1;
	int arr[]={1,3,4,2,5};
	int n= sizeof(arr)/4;

	for(int i=0;i<n;i++){
		sum=sum*arr[i];	
	}
	cout<<"Sum of all array element is : "<<sum;
}
