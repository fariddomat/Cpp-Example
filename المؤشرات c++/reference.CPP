#include<iostream.h>
#include<conio.h>
main()
{
int x=100;
int y=500;
int &ref=x;
cout<<"\n x= "<<x;
cout<<"\n ref= "<<ref;
cout<<"\n y= "<<y;

cout<<"\n &ref= "<<&ref;
cout<<"\n &x= "<<&x;
cout<<"\n &y= "<<&y;

ref=y;
cout<<"\n x= "<<x;
cout<<"\n ref= "<<ref;
cout<<"\n y= "<<y;
cout<<"\n ref= "<<&ref;
cout<<"\n &x= "<<&x;
cout<<"\n &y= "<<&y;
getch();
}


