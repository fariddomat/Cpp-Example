#include<iostream.h>
#include<conio.h>
#include<ctype.h>

void CONVERTTOLOWER(char *sptr)
{
	while(*sptr!='\0')
	{if(isupper(*sptr))
	*sptr=tolower(*sptr);
	++sptr;}
}
