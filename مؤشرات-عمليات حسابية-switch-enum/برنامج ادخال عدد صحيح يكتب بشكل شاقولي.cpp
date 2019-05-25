#include<iostream.h>
#include<conio.h>
#include<math.h>
main()
{
      int n,n1,d,p;
      cin>>n;
      int t=0; n1=n;
      while(n!=0)
      {t=t+1;
      n=n/10;}
      
      for(int c=t-1;c>=0;c--)
      {
      p=ceil(pow(10,c));
      d=n1/p;
      cout<<d<<endl;
      n1=n1%p;
      }
      getch();
      }
