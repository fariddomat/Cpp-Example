#include<iostream.h>
#include<conio.h>
#include<math.h>
main()
{
      float a,b,c,x,x1,x2,d;
      cout<<"a=";cin>>a;
      cout<<"b=";cin>>b;
      cout<<"c=";cin>>c;
      
      if(a==0)
      if(b==0)
      cout<<"error";
      else
      {x=-c/b;
      cout<<"x="<<x;}
      
      else
      {d=b*b-4*a*c;
      if(d>=0)
      {x1=(-b-sqrt(d))/(2*a);
      cout<<"x1="<<x1<<"\n";
      x2=(-b+sqrt(d))/(2*a);
      cout<<"x2="<<x2;}
      else
      cout<<"impossible";}
      getch();
      }
