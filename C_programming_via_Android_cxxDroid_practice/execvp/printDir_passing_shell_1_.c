#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include<stdio.h> 
int main(){
	char dir[1024];
	char *name;
	
getcwd(dir,sizeof(dir));
name=getenv("USER");
printf("%s",name);
printf("%s",dir);	
	
}
  