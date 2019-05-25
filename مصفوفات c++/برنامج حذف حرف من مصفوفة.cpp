#include<iostream.h>
void del(char *,char );
void print(char *);
main()
{
    const int n=30;
    char a[n]; cin>>a;
    char x;cin>>x;
    del(a,x);
    print(a);
}
void del(char *a,char x)
{
    while(*a!='\0')
    {
        if(*a==x)
            while(*a!='\0')
        {
            *a=*(a+1);
            a++;
            del(a,x);
        }
        else
            a++;
    }
}
void print(char *a)
{
      while(*a!='\0')
       {
        cout<<*a;
        a++ ;}
}
