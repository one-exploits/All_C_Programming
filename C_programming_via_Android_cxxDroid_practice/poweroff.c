#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char command[10]="sleep ";
	char Time[5];
	printf("Time :");
	gets(Time);
	strcat(command,Time);
	system(command);
	system("reboot -p");
return 0; 	
}