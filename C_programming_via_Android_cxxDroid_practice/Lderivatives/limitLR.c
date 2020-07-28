#include <stdio.h>
#include <stdlib.h>
int main(){
	float htendto_0=0.000001,ans;
	float limit_and_loop=0; // f(x),x=this_variable
	printf("------------------------------------------------------------\n");
	printf("\t\t    limit && derivatives       \n");
	printf("------------------------------------------------------------\n\n\n");

	printf("  lim");
	printf("\nx----->? : ");
	scanf("%f",&limit_and_loop);
     
//left hand limit  
     if (1==1){
     	    while(limit_and_loop<=10000000){
     	    	     ans=((limit_and_loop*limit_and_loop)-1)/(limit_and_loop-1);
     	    	     printf("\n f( %f ) = %f ",limit_and_loop,ans);
     	    	     system("sleep 0.0");
     	    	     limit_and_loop=limit_and_loop-htendto_0;
     	    	     
     	    	
     	    }
     	       
     	       
     	     
     	    
     	
     	
         }
}