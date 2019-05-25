#include <iostream.h>
#include <stdio.h>
#include <string.h>
using namespace std;
char* change(char *);
int main () {
   char str[80];
   cin.getline(str, 80); 
   const char s[2] = " ";
   char *token;
   
   /* get the first token */
   token = strtok(str, s);
   
   /* walk through other tokens */
   while( token != NULL ) {
   	
      if(strlen(token)%2==0){
      	token=change(token);
      }
      cout<<token<<endl;
      token = strtok(NULL, s);  
   } 
   return(0);
}

char* change(char str[]) {
	int i=0;
	while(str[i]!='\0'){
		if(isupper(str[i])){
			str[i]=tolower(str[i]);
		}else{
			str[i]=toupper(str[i]);
		}
		i++;
	}
	return str;
}