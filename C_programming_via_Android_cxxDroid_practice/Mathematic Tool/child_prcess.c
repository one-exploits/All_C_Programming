#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include <stdlib.h>

char *massage="chid processs";
int main() {
    char buff[1024];
    int fd[2];
    pipe(fd);
    int pid=fork();
    if (pid!=0)
    {
    	printf("\nPID: %d\n",pid);
        write(fd[1],massage,strlen(massage)+1);
    }
    else
    {
        read(fd[0],buff,1024);
        printf("got thin massage :%s",buff);
    }
        
    
}