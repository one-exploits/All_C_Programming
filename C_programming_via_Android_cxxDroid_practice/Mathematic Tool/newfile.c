#include <unistd.h>
#include <stdio.h>
int main(){
int pid=fork();
if(pid!=0){
	printf("\nprocess id %d\n",pid);
	}
	else{
	printf("\nprocess id=%d",pid);	
		
		}	
	
}