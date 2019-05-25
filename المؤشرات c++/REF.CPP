#include <stdio.h>
#include <conio.h>
#include<iostream.h>

main()
{

 int x=10;
 int &ref=x;
 int *p=&x;

	cout<<" \n x="<<x;
	cout <<"\n p="<<*p;
	cout<<"\n ref="<<ref;
 *p=20;
 cout<<" \n x="<<x;
 cout <<"\n p="<<*p;
 getch();
}
