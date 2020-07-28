
#include <stdio.h>
int main (){
	FILE *fp;
	fp=fopen("/sdcard/newfile.c","r");
char ch;
ch=fgetc(fp);
	while(!feof(fp)){
		printf("%c",ch);
		ch=fgetc(fp);

		}
	
	return 0; 
	}