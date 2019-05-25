#include<iostream.h>
#include<conio.h>
main()
{
      int x,y,d; cin>>x>>y;
      int n; cin>>n;
      for(int i=1;i<=n;i++)
      if(i%x==0&&i%y==0)
      d=i;
      cout<<d;
      getch();
      }
