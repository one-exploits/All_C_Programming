/*
©copyright mo Arquam all right reserved!
*/

#include <stdio.h>
#include <math.h>
struct ReturnTwo{
	float Ans1;
	float Ans2;
	};


struct ReturnTwo ReturnTwosridracharya(float a,float b,float c){
	struct ReturnTwo Return2;
	float Answerone,Answertwo,Discriminant,Discriminantsqrt;
	Discriminant=(b*b)-1*(4*a*c);
    Discriminantsqrt=sqrt(Discriminant);
/*
#################
####ifing....####
#################
*/
 if(Discriminant>=0){
 	printf("\n\ncalculating...\n\n");
 	Answerone=((-1*b)+Discriminantsqrt)/(2*a);
 	Answertwo=((-1*b)-Discriminantsqrt)/(2*a);	
     Return2.Ans1=Answerone;
 	Return2.Ans2=Answertwo;	
 	return Return2;
 	}
 else{
 	int i=0;
 while(i<10){	
 printf("\n invalid equation (?) ");	
  i++;
  }
 	}
	
	}

int main(){
	float a,b,c;
	struct ReturnTwo acceptTowvariables_tructure;
	printf("\t\t Mobile Num- 7007030997\n");
	printf("\t     YouTube channel- One-EXPLOITs'\n");
	printf("\n\n");
	printf("###################################################\n");
    printf("###\t\t\t\t\t\t###\n");
    printf("###\t\t\t\t\t\t###\n");
    printf("###\t    calculation x squre equation        ###\n");
    printf("###\t\t\t\t\t\t###\n");
    printf("###\t\t\t\t\t\t###\n");
    printf("###\t\t     ax^2+bx+c=0\t\t###\n");
    printf("###\t\t\t  x=?\t\t        ###\n");
    printf("###\t\t\t  x=?\t\t        ###\n");
    printf("###   copyright MoArquam. All right reserved!\t###\n");
	printf("###################################################\n");
/*
################
##inputing....##
################
*/
printf("\n\nco-officiant of x squre :");
scanf("%f",&a);
printf("\nco-officiant of x :");
scanf("%f",&b);
printf("\nconstant term c :");
scanf("%f",&c);

/*
####
call function
####
*/
acceptTowvariables_tructure=ReturnTwosridracharya(a,b,c);
printf("\n''''''''''''''''''''''''''Answer'''''''''''''''''''''''''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''        x= %f \t\t\t\t\t       ",acceptTowvariables_tructure.Ans1);
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''        x= %f \t\t\t\t\t       ",acceptTowvariables_tructure.Ans2);
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\n");

printf("\nThank You !");
printf("\n\nPress key to exit...");
char exit;
scanf(" %c",&exit);
/*class fg: 

        black='\033[30m'

        red='\033[31m'

        green='\033[32m'

        orange='\033[33m'

        blue='\033[34m'

        purple='\033[35m'

        cyan='\033[36m'

        lightgrey='\033[37m'

        darkgrey='\033[90m'

        lightred='\033[91m'

        lightgreen='\033[92m'

        yellow='\033[93m'

        lightblue='\033[94m'

        pink='\033[95m'
        lightcyan='\033[96m'
        
  */      	
 return 0; 	
}