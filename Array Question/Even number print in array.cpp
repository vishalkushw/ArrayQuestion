#include <iostream>
using namespace std;
int main(){
	int arr[5]={11,20,13,4,54};
	
	for(int i=0;i<5;i++){
		if(arr[i]%2==0){
			cout<<arr[i]<<" ";
		}
	}
}
