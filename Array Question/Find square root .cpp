#include <iostream>
using namespace std;
int main(){
	int arr[]={1,81,64,5,121};
	int size =sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<size;i++){
       int n=arr[i];
       for(int j=1;j<n/2;j++){
       	if(j*j==n){
       		cout<<n<<"\t";
		   }
	   }
	}
	
}
