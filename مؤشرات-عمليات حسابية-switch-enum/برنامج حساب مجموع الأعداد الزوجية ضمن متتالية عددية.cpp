#include<iostream.h>
#include<conio.h>
main()
{
      int x;
      cin>>x;
      int sum=0;
      for(int i=1;i<=x;i++)
      if(i%2==0)
      sum=sum+i;
      
      cout<<"sum="<<sum;
      getch();}
