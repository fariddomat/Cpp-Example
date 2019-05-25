#include <iostream> 
using namespace std;
 char* strcpy(char *, char *);
int main() 
{ 
    char ch[]="hello";
    char ch2[6];
    //ØÈÇÚÉ ŞíãÉ ÇáÓáÓáÉ ÇáËÇäíÉ ÈÇÓÊÎÏÇã ÇáÊÇÈÚ
    cout<<strcpy(ch2,ch)<<endl;
    //'ØÈÇÚÉ ŞíãÉ ÇáÓáÓáÉ ÇáËÇäíÉ ãÈÇÔÑ
    cout<<ch2<<endl;
    return 0; 
} 
char* strcpy(char *dest , char *source)   {
	int i = 0;
    while (*(dest+i) != '\0')
    {
        *(dest+i) = *(source+i);
        i++;
    } 
	return dest;
}