#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
      printf("1[+]moniter mode...");
      pid_t pid;
      pid=fork();
      if (pid==0)
      {
        while (1)
        {
         
        
        
        char *cmd[]={"du",NULL};
         execvp(cmd[0],cmd);
        }
      }
      else
      {
         system("find");
          printf("2[+]moniter mode...");
        
      }
      
      

    return 0;
   }