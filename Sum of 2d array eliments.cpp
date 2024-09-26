#include<iostream>
using namespace std;
int main(){ 
    int arr1[3][3]={1,1,2,5,6,7,1,2,5};
    int arr2[3][3]={5,5,1,2,4,6,7,1,3};
    int sum_arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
         sum_arr[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<sum_arr[i][j]<<" ";
}
cout<<endl;
    }
}
