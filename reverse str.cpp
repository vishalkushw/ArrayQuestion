// Reversr string

#include <iostream>
using namespace std;
int main(){
	string name="vishal";
	int start=0 ,end=name.size()-1;
	cout<<"Original String : " <<name <<endl;
	
	while(start<end){
		swap(name[start],name[end]);
		start++ , end--;
	}
	
	cout<<"Revers of String: " <<name <<endl;
	
}






