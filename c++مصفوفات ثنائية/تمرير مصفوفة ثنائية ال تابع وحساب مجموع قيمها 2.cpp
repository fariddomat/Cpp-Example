#include<iostream>
using namespace std;

const int m=4;

void processArr(int a[][m],int n) {
	int sum=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			sum+=a[i][j];
	
	cout<<"Sum of the 2d array : "<<sum<<endl;
}
int main() {
   int arr[3][m]={
		{ 1 , 2 , 3 , 4 },
	    { 5 , 6 , 7 , 8 },
		{ 9 , 10 , 11 , 12}
	};

   processArr(arr,3);
   return 0;
}