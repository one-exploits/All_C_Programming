#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<string.h>
int main(int len_args,char *arguments[]){    
       printf("\n%s\n",arguments[0]);
       strcat(arguments[0],".o");
       printf("\n%s\n",arguments[0]);

    return 0;
   }