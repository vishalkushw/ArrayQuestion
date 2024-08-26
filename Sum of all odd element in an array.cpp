//  WAP to find sum of all odd element in an array.

#include <iostream>
using namespace std ;
int main(){
	int n ,sum=0;
	cout<<"Enter your range : ";
	cin>>n;
	int array[n];
	
	for(int i=0;i<n;i++){
		cout<<"Enter your number of index "<<i <<" : ";
		cin>>array[i];
	}
	
	for(int i=0;i<n;i++){
	    cout<<"your number of index "<<i<<" is : "<<array[i]<<endl;
	    if(array[i] % 2 ==1){
		
		sum=sum+array[i];
	 }
	}
	cout<<"Odd sum is :"<<sum;
}

