#include <iostream>
using namespace std;
int main(){
	int arr[5]={11,20,13,34,54};
	cout<<"Original array : ";
	for(int i=0;i<5;i++){
			cout<<arr[i]<<" ";
		}
	cout<<endl;
	cout<<"Reverse array : ";
	for(int i=4;i>=0;i--){
			cout<<arr[i]<<" ";
	}
}
