#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
void assign_to_pointer(int *);
	
int main(){
	int x=10;
	printf("before x=%d\n",x);
	assign_to_pointer(&x);
	printf("x=%d",x);
	
}
void assign_to_pointer(int *data){
	(*data)=100;

	
}

