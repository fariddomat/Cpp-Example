#include<iostream.h>
#include<conio.h>
#include<math.h>
main()
{
      float x,f; cin>>x;
      if (x>-10)
      if (x<5)
      if (x>0)
      f=x/(x-5);
      else
      f=-x/(x-5);
      else
      f=2*x*x+7;
      else
      {cout<<"error";
      getch();
      exit(-1);}
      cout<<f;
      getch();}
