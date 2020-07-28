#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include <unistd.h>
#include<readline/readline.h>
#include <sys/wait.h>
int main(){
    while(1){
    char *command;
    command=readline("\n\033[32mroot@localhost:>");
     char *cmd[]={command,NULL}; 
      pid_t pid;
      pid=fork();
      if (pid==0)
      {
    execvp(cmd[0],cmd);
          

      }
      else
      {
        wait(NULL);
       
      }
    }
      
      
     printf("\n\033[31m[!] SHELL HAS TERMINATED...\n");
    return 0;
   }