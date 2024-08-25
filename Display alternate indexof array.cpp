// display alternate elements from starting index.

#include <iostream>
using namespace std ;
int main(){
	int n;
	cout<<"Enter your range : ";
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cout<<"enter your number of index "<<i<<" : ";
		cin>>array[i];
	}
	
	for(int i=0;i<n;i=i+2){
		cout<<"Number of index "<<i <<":" <<array[i]<<endl;
	}
	
}
