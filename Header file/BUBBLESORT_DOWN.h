#include<iostream.h>
#include<conio.h>
void BUBBLESORT_DOWN(int a[],int n)
      {for(int pass=1;pass<n;pass++)
      for(int i=0;i<n-1;i++)
      if(a[i]>a[i+1])
      {int hold=a[i];
      a[i]=a[i+1];
      a[i+1]=hold;}
      }

