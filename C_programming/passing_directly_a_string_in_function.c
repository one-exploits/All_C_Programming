#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<sys/stat.h>
char *color="\033[31m";
int stringpass(char *);

int main() {
    stringpass("string has been passed");
    return 0;
}

int stringpass(char *chararray){
 printf("%s%s\n",color,chararray);


}


