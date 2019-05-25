#include<iostream.h>
#include<conio.h>
#include<math.h>
//********************
void read(int *);
void print(int *);
void maxmin(int *,int &,int &);
void avg(int *);
int n;
main()
{
      cin>>n;
	  int *a=new int [n];
      read(a);
      print(a);
      int max=*a; int min=*a;
      maxmin(a,max,min);
      cout<<"\nmax is  "<<max<<"\n";
      cout<<"min is  "<<min<<"\n";
      avg(a);
      
      getch();
      }
      
      void read(int *a)
      {
      for(int i=0;i<n;i++)
      {cin>>*a;a++;}
      }
      
      void print(int *a)
      {
      for(int i=0;i<n;i++)
      {cout<<*a<<"\t";a++;}
      }
      
      void maxmin(int *a,int &max,int &min)
      {
           for(int i=0;i<n;i++)
           {
		   if(*a>max)
           max=*a;
           
           if(*a<min)
           min=*a;
           
           a++;}
      }
      
      void avg(int *a)
      {int sum=0;
      int j=0;
	  for (int i=0;i<n;i++)
      {sum=sum+(*a);
	  a++;
	  j++;}	
      float average;
	  average=(float)sum/j;
	  cout<<"\n\n average is "<<average;
	  }

