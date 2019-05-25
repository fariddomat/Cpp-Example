#include<iostream.h>
#include<conio.h>
#include<ctype.h>

void CONVERTTOUPPER(char *sptr)
{
	while(*sptr!='\0')
	{if(islower(*sptr))
	*sptr=toupper(*sptr);
	++sptr;}
}
