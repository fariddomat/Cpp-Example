#include<iostream.h>
#include<conio.h>
void maxf2(int ,int ,int ,int &);
main()
{
int n1,n2,n3,max;
cout<<"\n insert n1=";
cin>>n1;
cout<<"\n insert n2=";
cin>>n2;
cout<<"\n insert n3=";
cin>>n3;
maxf2(n1,n2,n3,max);
cout<<"\ larget="<<max;
getch();
}
void maxf2(int n1,int n2,int n3,int &large)
{
if(n1>n2&&n1>n3)
large=n1;
else if (n2>n3)
large=n2;
else
large=n3;
}
