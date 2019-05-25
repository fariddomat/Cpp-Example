#include<iostream>
using namespace std;
int main(){	
	int a[3][4]={
		{ 1 , 2 , 3 , 4 },
	    { 5 , 6 , 7 , 8 },
		{ 9 , 10 , 11 , 12}
	};
	cout<<"Enter number of row to print :"<<endl;
	int x; cin>>x;
	
	for(int j=0;j<4;j++)
		cout<<a[x-1][j]<<"\t";
	cout<<endl;
	return 0;
}