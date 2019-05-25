#include<iostream.h>
#include<conio.h>
#include<string.h>
//****************
void convert(char *);
bool search(char *,char );
bool del(char *,char );
void swap(char *,int );
void swap1(char *,char *);
main()
{
      const int n=30;
      char a[n];
      cin>>a;
      cout<<"the array before convert "<<a<<endl;
      convert(a);
      cout<<"the array after convert "<<a<<endl;
      char x;cout<<"enter the letter you want to search it:: ";cin>>x;
   bool b=search(a,x);
      if(b==true)
      cout<<"found"<<endl;
      else
      cout<<"not found"<<endl;
      char y;
      cout<<"enter the letter you want to delete it:: ";cin>>y;
      bool d=del(a,y);
      if(d==true)
      cout<<"the new array after we delete the letter="<<a;
      else
      cout<<"there was no change"<<a<<endl;
       int l=strlen(a);
      swap(a,l);
      cout<<"the array after swap"<<a;
      getch();}


void convert(char *a)
{
     while(*a!='\0')
     {
                    if(*a>='a'&&*a<='z')
                    *a=*a-32;
                    a++;}
}
bool search(char *a,char x)
{ bool c=false;

 for(;*a!='\0';a++)
  if(*a==x)
    {c=true;break;}

  return c;
}
bool del(char *a,char y)
{ bool b=false;
     while(*a!='\0')
     {
                    if(*a==y)
                    {b=true;break;}
                    a++;
                    }
     while(*a!='\0')
     {
                    *a=*(a+1);
                    a++;
                    }
                    return b;
}

void swap(char *a,int l)
{
     for(int i=0;i<l/2;i++)
    swap1(&a[i],&a[l-1-i]);
}

void swap1(char *b,char *c)
{
    char hold=*b;
     *b=*c;
     *c=hold;
     }
