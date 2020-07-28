#include<stdlib.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include <sys/wait.h>
#include"tcolor.h"
#define or ||
#define and &&  
void asm_to_exe(char *,char*);
int main(int len_args,char *arguments[]){   
       if (arguments[1]==NULL or arguments[2]==NULL){
       	printf("\033[H\033[J");
            t_bold
          t_c_red
       	printf("Error: An Error Occurred! Missing (C.L.A) Arguments.\nexiting...\n");
          t_reset
           exit(EXIT_FAILURE);
        }else{
        
        asm_to_exe(arguments[1],arguments[2]);
        return 0; 
        }
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
     char run_bin[30]={0};
     strcat(run_bin,"./");
     strcat(run_bin,executble_name);
     pid=fork();
     
     if (pid<0){
          t_c_yellow
     	printf("\nError: An Error Occorred! While Creating A Child Process...\nexiting...\n");
          t_reset
         exit(EXIT_FAILURE);
     }
     else if (pid==0)
     {    
          t_bold
          t_c_cyan
           printf("\nBuilding... Object File...\n");
//	  sleep(10);
          printf("$%s %s %s %s\n",command[0],command[1],command[2],command[3]);
          t_reset
          sleep(0.2);
        if (execvp(command[0],command)<0){
             t_bold
             t_c_red
        	printf("\nError: An Error Occorred! while exec(); SysCall Handling\nexiting...\n");
             t_reset
        	exit(EXIT_FAILURE);
        }else{
        	printf("");
              }
     }
     else
     {
	char charactor;
         wait(NULL);
         t_c_orange
         printf("Linking... File ...\n");
         //printf("\n\nsuccess...");
         printf("$%s\n",linker);
         t_reset
         system(linker);
     t_bold
     t_c_red
 	 printf("\nDo You Want To Run %s Press Enter To Continue?\n",executble_name);
	 scanf("%c",&charactor); 
	 printf("\033[H\033[J");	
      t_reset

	     printf("Runing Programm...\n");
         system(run_bin);
     }
     
     


}
