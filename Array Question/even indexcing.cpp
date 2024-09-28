#include <iostream>
using namespace std;
int main(){
	int arr[5];
	cout<<"Enter 5 value \n";
	for (int i=0;i<5;i++){
		cin>>arr[i];
	}

	for (int i=0;i<5;i++){
	
		if(i%2==0){
			cout<<arr[i];
		}
   }
}

