
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int takeInput(char*);
int takeInput(char* str) 
{ 

    char buf[100];
    //gets(buf);
   fgets(buf,100,stdin);

//#    buf = readline("\n>>> "); 

//#    if (strlen(buf) != 0) { 

//#        add_history(buf); 

        strcpy(str, buf); 

//        return 0; 

//    } else { 

 //       return 1;
 printf("%p\n",&str); 

   // } 
   return 0;
} 


int main(){
char *p;
printf("%s",p);	
takeInput(p);
printf("%s",p);
printf("%p",&p);	
}