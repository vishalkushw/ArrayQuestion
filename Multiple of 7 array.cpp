// display elements which are multiple of 7

#include <iostream>
using namespace std ;
int main(){
	int n ;
	cout<<"Enter your range : ";
	cin>>n;
	int array[n];
	
	for(int i=0;i<n;i++){
		cout<<"Enter your number of index "<<i <<" : ";
		cin>>array[i];
	
	}
	for(int i=0;i<n;i++){
	    if(array[i] % 7==0){	
        cout<<array[i]<<" ";
	}
		
}
  
}

