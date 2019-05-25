#include<iostream.h>
#include<conio.h>
#include<math.h>
main()
{
      float x,f; cin>>x;
      if (x>=5&&x<10)
      { f=sqrt((x-5)/2); cout<<f;}
      else
      {if(x>10&&x<=20)
      {f=(x*x+2*x)/(x-10); cout<<f;}
      else
      cout<<"not found";}
      getch();
      }
