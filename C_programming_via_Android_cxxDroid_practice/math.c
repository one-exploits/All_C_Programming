#include<stdio.h>
#include <string.h>
#include <math.h> 
#include <stdlib.h>
int returnintzeroone(int);

int returnintzeroone(int angle){
	if (angle>=0)
	{
	return 1; 	
		
		}
	else if (angle<=0){
		
	return 1; 	
	}
 
return 0; 	
}

int main(int argc ,char *argv[]){
	

/*
*************************************
*** if no command Argument exit the**
*************************************
*/	
if (argv[1]==NULL){
	printf("math : missing functionnal argument.\n");
	printf("Try 'math --help or -h,h' for more information. \n\n\n\n\n\n\n");
    }

/*
##################################################
### after -s,-c,-t Argument whitch is a number ###
### which is a integer number                  ###
### convert string to integer as angle okk     ###
### stringNumber==angle digree                 ###
##################################################
*/
int stringNumber=atoi(argv[2]);//Asciitointeger
/*
#########################################
### returnintzeroone()                ###
### it return value as true           ###
### for both -integer,+integer        ###
### integer=>0 && integer=<0          ###
#########################################
*/
int trueorfalse=returnintzeroone(stringNumber);	

/*
*********************
For tan theta
*********************			
*/
if (strcmp(argv[1],"-s")==0 && trueorfalse==1){
	int angle=stringNumber;
	double Digree;
	double Ans;
	while(1){
		Digree=((M_PI/180)*angle);
		Ans=sin(Digree);
		if (angle%90==0){
		printf("\n\n\033[33m");	
		}
		printf("\nsin %d °==%f",angle,Ans);
		system("sleep 0.5");
		printf("\033[32m");
		
		
		if (angle>=0){
		angle++;
		}
		else if (angle<0)
		{
		angle--;	
			}
			
}			
}			
/*
*********************
For tan theta
*********************			
*/
else if(strcmp(argv[1],"-t")==0 && trueorfalse==1 ){
	int angle=stringNumber;
	double Digree;
	double Ans;
	while(1){
		Digree=((M_PI/180)*angle);
		Ans=tan(Digree);
		printf("\ntan %d °==%f",angle,Ans);
		system("sleep 0.5");
		printf("\033[32m");
	
/*
######################################
############## if condition like i++##
######################################

*/
			if (angle>=0){
		         angle++;
		       }
	    	else if (angle<0)
	       	{
	         	angle--;	
		   	}
	

}																		
}

//help option
else if(strcmp(argv[1],"h")==0 || strcmp(argv[1],"-h")==0 || strcmp(argv[1],"--h")==0 ||  strcmp(argv[1],"help")==0 || strcmp(argv[1],"-help")==0 || strcmp(argv[1],"H")==0 ||  strcmp(argv[1],"-H")==0 || strcmp(argv[1],"--H")==0 ||  strcmp(argv[1],"-Help")==0 || strcmp(argv[1],"-HELP")==0 || strcmp(argv[1],"--HELP")==0 ){
	printf("hellow");
	
	
	}
			
		
	
return 0; 		
	
}











