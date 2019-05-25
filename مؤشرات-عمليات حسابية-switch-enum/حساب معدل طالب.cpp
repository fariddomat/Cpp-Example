#include<iostream.h>
#include<conio.h>
main ()
{
     int x,n,c=0,i=1,sum=0; float avg;
     cin>>n;
     while(i<=n)
     {cin>>x;
     if(x>=60)
     {sum=sum+x;
     c++;}
     i++;}
     avg=(float)sum/c;
     cout<<avg;
     getch();
     }
