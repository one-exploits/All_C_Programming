#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
int main() {
    int pid=fork();
    if (pid!=0)
    {
        printf("\nprinting this statement with parent process====>>> child process id =%d\n",pid);
       // system("ps");
       // int data;
       // scanf("%d",&data);
    }
    else
    {                 //why else block run beacase fork() return in childe process 0 
                      //but it return in partent process as >0
        printf("\nhellow from child\n");//observe the process id and killing  process 
        system("ps -a");
        printf("________________________________________________________________");
        sleep(10);
        system("ps");
    }
   
     return 0;
}
