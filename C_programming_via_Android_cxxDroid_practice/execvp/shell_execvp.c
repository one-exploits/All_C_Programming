#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

main()
{
    char args[128];
    //User input
    printf("> ");
    fgets(args, 128, stdin);
    char *cmd={args,NULL};
    printf("%s",cmd[0]);
   int stus=execvp(&args,cmd);
   printf("%d",stus);
}