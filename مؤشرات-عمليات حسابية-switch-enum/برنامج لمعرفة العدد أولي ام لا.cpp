#include<iostream.h>
#include<conio.h>
main()
{
      bool f=true;
      int x=1;
      
      while(x<=100)
      {
                 for(int i=2;i<x;i++)
                 if(x%i==0)
                 f=false;
                 
       if(f==false)
       cout<<x<<"   no\n";
       else
       cout<<x<<"   yes\n";
       x++;
       f=true;}
       getch();
       }          
