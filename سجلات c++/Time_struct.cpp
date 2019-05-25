#include<iostream>
using namespace std;
struct Time{
	int houre;
	int minutes;
	int seconde;
};

int main(){
	Time breakfast={10,0,0};
	Time lunch={14,30,0};
	Time dinner={20,45,0};
	
	int n=3;
	Time eatingTimes[n]={breakfast,lunch,dinner};
	
	cout<<"eating times:"<<endl;
	
	for(int i=0;i<n;i++){
		cout<<eatingTimes[i].houre<<":"
			<<eatingTimes[i].minutes<<":"
			<<eatingTimes[i].seconde<<endl;
	}
	
}