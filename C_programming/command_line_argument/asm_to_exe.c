#include<stdlib.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include <sys/wait.h>
void asm_to_exe(char *,char*);
int main(int len_args,char *arguments[]){    

       asm_to_exe(arguments[1],arguments[2]);
    return 0;
   }

void asm_to_exe(char *source_name,char *executble_name){
     char exe_obj_file_cat[30]={0};
     pid_t pid;
     strcat(exe_obj_file_cat,executble_name);
     strcat(exe_obj_file_cat,".o");
     char *command[]={"as","-o",exe_obj_file_cat,source_name,NULL};
     char linker[60]={0};
     strcat(linker,"ld -o ");
     strcat(linker,executble_name);
     strcat(linker," ");
     strcat(linker,exe_obj_file_cat);
     pid=fork();
     if (pid==0)
     {
        if(execvp(command[0],command)<0){
           printf("");

        }
        
     }
     else
     {
         wait(NULL);
         
         system(linker);
     }
     
     

}