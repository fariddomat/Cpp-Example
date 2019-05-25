#include<iostream>
using namespace std;

void processArr(int a[][4]) {
	int sum=0;
	for(int i=0;i<3;i++)
		for(int j=0;j<4;j++)
			sum+=a[i][j];
	
	cout<<"Sum of the 2d array : "<<sum<<endl;
}
int main() {
   int arr[3][4]={
		{ 1 , 2 , 3 , 4 },
	    { 5 , 6 , 7 , 8 },
		{ 9 , 10 , 11 , 12}
	};

   processArr(arr);
   return 0;
}