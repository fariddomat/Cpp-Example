#include<iostream>
using namespace std;
int main(){	
	int n,m;
	cout<<"Enter number of row n :"<<endl;
	cin>>n;
	cout<<"Enter number of column m :"<<endl;
	cin>>m;
	
	int a[n][m];
	cout<<"Enter "<<n*m<<" value:"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cout<<a[i][j]<<"\t";
		cout<<endl;
	}
	return 0;
	
}