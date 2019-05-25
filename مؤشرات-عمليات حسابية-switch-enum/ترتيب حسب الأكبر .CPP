#include<iostream.h>
#include<conio.h>
void swap(int &,int &);
void compare(int &n1,int &n2,int &n3);
void main()
{
int n1,n2,n3;
cout<<"\n n1=";
cin>>n1;
cout<<"\n n2=";
cin>>n2;
cout<<"\n n3=";
cin>>n3;
compare(n1,n2,n3);
cout<<"\n n1="<<n1;
cout<<"\n n2="<<n2;
cout<<"\n n3="<<n3;
getch();
}
void swap(int &x,int &y)
{
int t;
t=x;
x=y;
y=t;
}
void compare(int &x,int &y,int &z)
{
if(x>y)
swap(x,y);
if(y>z)
swap(y,z);
if(x>y)
swap(x,y);
}