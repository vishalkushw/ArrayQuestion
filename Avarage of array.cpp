//  find avg of array
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
		sum=sum+array[i];
	}
	cout<<"Avarage of "<<n <<" number is : "<<sum/(float)n;
}

