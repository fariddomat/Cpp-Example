#include<iostream.h>
#include<conio.h>
//***************
void convert(char *);
bool search(char*,char);
void del(char *,char);
main()
{
	const int n=5;
	char a[n];
	cin>>a;
	
    convert(a);
 	cout<<"\n\n"<<a<<"\n\n";
	
    char x;
	cout<<"please enter a letter to search\n";
	cin>>x;
	bool b=search(a,x);
	
	if(b==true)
	cout<<"\nthe letter is found\n\n";
	else
	cout<<"\nthe letter is not found\n\n";
    
    char d;
 	cout<<"\n\nplease enter a charctar to delet\n\n";
	cin>>d;
 	del(a,d);
	cout<<"\n\n"<<a;
	
    getch();
	}
	
    void convert(char *a)
	{
	while(*a!='\0')
	{if(*a>='a'&&*a<='z')
	*a=*a-32;
	a++;}
	}
	
    bool search(char *a,char x)
	{
	while(*a!='\0')
 	if(*a==x)
  	return true;
  	else
  	a++;
	return false;
	}

	void del(char *a,char d)
	{
	while(*a!='\0')
	{if(*a==d)
	break;
	a++;}
	while(*a!='\0')
	{*a=*(a+1);
	a++;}
	}   
