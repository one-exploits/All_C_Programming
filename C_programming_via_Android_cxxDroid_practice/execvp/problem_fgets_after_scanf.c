#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
// C program to demonstrate the problem when 
// fgets()/gets() is used after scanf() 
#include<stdio.h> 
  
int main() 
{ 
   int x; 
   char str[100]; 
   scanf("%d ", &x); 
   fgets(str, 100, stdin); 
   printf("x = %d, str = %s", x, str); 
   return 0; 
} 