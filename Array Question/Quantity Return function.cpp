/* function retun value without parameter 

datatype functionname(){
	statement/code;
	return value;
}
int main(){
	
}
*/

#include <iostream>
using namespace std;

int product(int qty){
	return 500*qty;
	
}

void mobile(int qty){
	cout<<500*qty;
	
}

int main(){
	int q;
	cout<<"Enter Quantity : ";
	cin>>q;
   int price= product(q)+3000;
   cout<<"Price : "<<price<<"\n";
   mobile(q);
	
}
