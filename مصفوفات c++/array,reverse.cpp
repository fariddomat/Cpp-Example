#include<iostream.h>
#include<conio.h>
#include<string.h>
void reverse(char*,int );
const int n=10;
main()

{char a[n];cin>>a;
reverse(a,strlen(a));
cout<<a<<endl;
getch();
}
void reverse(char*a,int size)
{for(int i=0;i<size/2;i++)
{char temp=*(a+i);
*(a+i)=*(a+size-i-1);
*(a+size-i-1)=temp;}
}
