#include <iostream> 
using namespace std; 
int strlen(char*) ;
int main() 
{ 
    char ch[]="hello";
    cout<<strlen(ch)<<endl;
    return 0; 
} 

int strlen(char *str) {
	int count=0;
	while(*str!='\0'){
		count++;
		*str++;
	}
	return count;
}