#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
int main(){
pid_t pid =fork();
if(pid==0)
	{
	char *arg[]={"l",NULL};
	if(execvp(arg[0],arg)<0){
		char *x="success";
		printf("\033[42m");
	printf("\x1b[6;30;42m %s\x1b[0m",x);			
	printf("%d",errno);
	}	
		}
		
	else{
	wait(NULL);
	exit(0);	
	}
	
}