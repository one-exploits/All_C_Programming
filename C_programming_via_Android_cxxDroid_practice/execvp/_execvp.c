#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
int main(){
int pid;
pid=fork();
if(pid==0){ 
     char *command="ls";
    //fgets(command,20,stdin);
	char *cmd[]={"/system/bin/ls",NULL};
	//strcat(cmd[0],command);
//	printf("%s",cmd[0]);
	//strcpy(cmd[0],"ls");
	
	execlp("/system/bin/ls",NULL);
		
			}
			else{
				sleep(10);	
			    wait(NULL);
					printf("fnished");
			
				}	
return 0; 	
}