#include<iostream.h>
#include<conio.h>
void CONVERSE(int b[],int n)
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
