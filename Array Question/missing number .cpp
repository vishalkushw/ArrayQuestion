#include <iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,5,6};
	int size =sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<size;i++){
	if(arr[i+1]-arr[i]>1){
		cout<<"missing number : "<<arr[i]+1;
		break;
	}
	}
}

