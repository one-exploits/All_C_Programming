#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<unistd.h>
#define data_size 20
char *msg_1="Hi Mo Arquam 1 Msg.";
char *msg_2="Hi Mo Arquam 2 Msg.";
char *msg_3="Hi Mo Arquam 3 Msg.";

int main(){

    char readed_data[data_size];
    int file_descripter[2];
        if(pipe(file_descripter)<0){
            perror("piping... failed!!");
        
        }else
        {  
           printf("\033[01m");
           printf("\033[31m");
            //printf("\033[42m");//background
            printf("\nfile_descripter[1] =%d for write data ",file_descripter[1]);
            printf("\nfile_descripter[0] =%d for read data\n",file_descripter[0]);
            printf("\033[0m");
            //fd[0]==3
            //fd[1]==4
            //this is file descripter
            // int status_1=write(4,msg_1,data_size);
            // int status_2=write(4,msg_2,data_size);
            // int status_3=write(4,msg_3,data_size);
            // printf("%d",status_1);

            write(4,msg_1,data_size);
            write(4,msg_2,data_size);
            write(4,msg_3,data_size);
            
            
        }
        for (int i = 0; i < 3; i++)
        {   
            printf("\033[01m");
            printf("\033[32m");
            read(3,readed_data,data_size);
            printf("%s\n",readed_data);
        }

      

    return 0;
   }


