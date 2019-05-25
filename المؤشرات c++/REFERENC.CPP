#include<iostream.h>
#include<conio.h>
void doublee(int ,int &);
main()
{

int n,result;
cout<<"\n insert n=";
cin>>n;
doublee(n,result);
cout<<"\ result="<<result;
getch();
}
void doublee(int n,int &res)
{
res=n*n;
}
