#include <iostream>
using namespace std;

	
class Shop{
	private:
	int itemID[100];
	int itemPrice[100];
	int counter;
	public:
		void initCounter(void){
		counter=0;
		}
		void setprice(void){
			cout<<"Enter ID of your item no "<<counter+1<<endl;
			cin>>itemID[counter];
			cout<<"Enter Price of Your Item "<<endl;
			cin>>itemPrice[counter];
			counter++;
		} 
		
		void displayPrice(void){
			for(int i=0;i<counter;i++){
			cout<<"The Price of item with ID"<<itemID[i]<<" is ";
			cout<<itemPrice[i]<<endl;
			}
		}
	
	
};	
int main(){
	Shop sp;
	sp.initCounter();
	sp.setprice();
	sp.setprice();
	sp.setprice();
	sp.setprice();
	sp.displayPrice();
}
