#include <iostream> 
using namespace std; 
int main() 
{ 
    char ch[6]={'h','e','l','l','o','\0'};
    char ch1[]="hello";
	char ch2[30];
	//����� ����� �������� ����
	cout<<"first string using loop: ";
	for(int i=0;i<6;i++){
		cout<<ch[i];
	}
	cout<<endl;
	//����� ����� ���� ����
	cout<<"second string without loop: ";
	cout<<ch1<<endl;
	//����� ������ �����
	cin>>ch2;
	cout<<ch2<<endl;
	//����� ����� �������� ����
	char *chptr=ch1;
	cout<<"first string using pointer: ";
	cout<<chptr<<endl;
    return 0; 
} 