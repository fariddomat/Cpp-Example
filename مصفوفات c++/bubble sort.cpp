#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void print(int [],int);
void bubblesort(int [],int);
main()
{
      const int n=9;
      int a[n]={5,2,99,56,35,78,333,87,31};
      print(a,n);
      bubblesort(a,n);
      cout<<"\n\n\n";
      print(a,n);
      getch();
      }
      
      void print(int a[],int n)
      {for(int i=0;i<n;i++)
      cout<<a[i]<<setw(4);}
      
      void bubblesort(int a[],int n)
      {for(int pass=1;pass<n;pass++)
      for(int i=0;i<n-1;i++)
      if(a[i]>a[i+1])
      {int hold=a[i];
      a[i]=a[i+1];
      a[i+1]=hold;}
      }
