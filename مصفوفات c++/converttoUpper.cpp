#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void converttoUpper(char *);
main()
{
	char phrase[]="abcdefg";
	cout<<phrase;
	converttoUpper(phrase);
	cout<<"\n\n\n"<<phrase;
	getch();	
}
void converttoUpper(char *sptr)
{
	while(*sptr!='\0')
	{if(islower(*sptr))
	*sptr=toupper(*sptr);
	++sptr;}
}