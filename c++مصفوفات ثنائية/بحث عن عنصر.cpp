#include<iostream>
using namespace std;
int main(){	
	int a[3][4]={
		{ 1 , 2 , 3 , 4 },
	    { 5 , 6 , 7 , 8 },
		{ 9 , 10 , 11 , 12}
	};
	cout<<"Enter number to search for :"<<endl;
	int x; cin>>x;
	bool b=false;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++)
			if(a[i][j]==x){
				b=true;
				break;
			}
	}
	if(b==true)
		cout<<"found"<<endl;
	else
		cout<<"not found"<<endl;
	return 0;
}