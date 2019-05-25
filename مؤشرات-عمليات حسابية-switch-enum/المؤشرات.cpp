#include<iostream.h>
#include<conio.h>
main()
{
	int a;
	int *a1;
	a=7;
	a1=&a;
	cout<<&a<<"\t"<<a1<<"\n";
	cout<<a<<"\t"<<*a1<<"\n";
	cout<<&a1;
	getch();

}