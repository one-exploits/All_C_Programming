#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
	char Array[6]={0};
	for(int i=0;i<6;i++)
	{
		printf("%U And thier content %c\n",&Array[i],Array[i]);
	}
	
return 0; 	
}
