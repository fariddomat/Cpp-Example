#include<iostream.h>
#include<conio.h>
int Z(int[],int);
main()
{
      const int size=10;
      int a[size]={2,4,6,8,10,12,14,16,18,20};
      int result=Z(a,size);
      cout<<result;
      getch();
      return 0;
      }
      int Z(int b[],int n)
      {
               if(n==1)
               return b[0];
               else
               return b[n-1]-Z(b,n-1);
               }
      
