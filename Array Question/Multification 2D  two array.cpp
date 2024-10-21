#include <iostream>
using namespace std;
int main(){
	int arr1[2][3];
	int arr2[3][3];
	int tmp;
	cout<<"Enter  first array element";
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cin>>arr1[i][j];
		}
	}
	
	
	cout<<"Enter  second array element";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr2[i][j];
		}
	}
	
	int ans[2][3],sum;
	cout<<"after matrix multification\n";
		for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			sum=0;
			for(int k=0;k<3;k++){
				sum=sum+arr1[i][k]*arr2[k][j];
				ans[i][j]=sum;
			}
		
		}
	}
	
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<ans[i][j]<<"\t";
		}
		cout<<"\n";
	}
} 
