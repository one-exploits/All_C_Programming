#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
int main(){
     char *c="hi how are you mr. arquam";
    // char c="h";
      char **ptr;
      ptr=&c;
      //ptr[0]="hi";
      printf("\033[31mthe adree of c is %p\n",&c);
      printf("the address in ptr is %p\n",ptr);

    return 0;
   }