#include <iostream>
using namespace std;

int main(){
	int Marks[]={88,45,66,77,8,19,69};
	int count=0;
	int size=sizeof(Marks)/sizeof(Marks[0]);
	for(int i=0;i<size;i++){
		if(Marks[i]>=60){
			count++;
		}
	}
	cout<<count;
	
}



