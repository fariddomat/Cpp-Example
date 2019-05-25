#include<iostream.h>
#include<conio.h>
main()
{
int x=100;
int &ref=x;
int*p=&x;

cout<<"\t x="<<x;
cout<<"\t *p="<<*p;
cout<<"\t ref="<<ref;
cout<<"\n \n ";
*p=500;
cout<<"\t x="<<x;
cout<<"\t *p="<<*p;
cout<<"\t ref="<<ref;
cout<<"\n \n ";
ref=800;
cout<<"\t x="<<x;
cout<<"\t *p="<<*p;
cout<<"\t ref="<<ref;



getch();
}
