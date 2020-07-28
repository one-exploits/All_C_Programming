#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(){
//	printf("%d",getppid());
	
  pid_t PID;
  PID=fork();
  printf("PID: %d\n",PID);
 // execl("/system/bin/ls","-l");	
return 0; 	
}