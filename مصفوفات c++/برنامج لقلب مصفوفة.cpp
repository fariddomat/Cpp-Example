#include<iostream.h>
#include<conio.h>
void test(int[],int);
main()
{
      const int size=10;
      int a[size]={2,4,6,8,10,12,14,16,18,20};
      test(a,size);
      for(int i=0;i<size;i++)
      cout<<a[i]<<"\t";
      getch();
      }
      
void test(int b[],int n)
{
     int temp;
     for(int k=0;k<n/2;k++)
     {
     temp=b[k];
     b[k]=b[n-1-k];
     b[n-k-1]=temp;
     }
     return;
                   }
