// palindrom string or not

#include <iostream>
using namespace std;
int main(){
	string f1= "NitiN",reverse="";
	int size= f1.size();
	for(int i=size-1;i>=0;i--){
		reverse=reverse+f1[i];
		
	}
	if(f1==reverse){
		cout<<"palindrom"; 
	}
	
	else{
		cout<<"not a palindrom";
	}	
}

