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
 	printf("\033[93m|+|\n|+|\n|+|\n|+|\n|+|\n|+|\n|+|\ncalculating...\n\n");
 	Answerone=((-1*b)+Discriminantsqrt)/(2*a);
 	Answertwo=((-1*b)-Discriminantsqrt)/(2*a);	
     Return2.Ans1=Answerone;
 	Return2.Ans2=Answertwo;	
 	return Return2;
 	}
 else{
 	
 printf("\033[31m invalid equation ");	
 	}
	
	}

int main(){
	float a,b,c;
	struct ReturnTwo acceptTowvariables_tructure;
    printf("\t\t Mobile Num- 7007030997\n");
	printf("\t     YouTube channel- One-EXPLOITs'\n");
	printf("\n\n");

	printf("\033[90m##################\033[93m############\033[90m#####################\n");
    printf("\033[36m###\t\t\t\t\t\t###\n");
    printf("###\t\t\t\t\t\t###\n");
    printf("###\t\tcalculation x² equation         ###\n");
    printf("###\t\t\t\t\t\t###\n");
    printf("###\t\t\t\t\t\t###\n");
    printf("###\t\t     ax²+bx¹+c¹=0\t\t###\n");
    printf("###\t\t\t  x=\033[93m?\033[36m\t\t        ###\n");
    printf("###\t\t\t  x=\033[93m?\033[36m\t\t        ###\n");
    printf("###\t\033[31m © MoArquam. All right reserved!\033[36m\t###\n");
	printf("\033[90m##################\033[93m############\033[90m#####################\n");
/*
################
##inputing....##
################
*/
printf("\n\n\033[36mco-officiant of x² :");
scanf("%f",&a);
printf("\n\033[36mco-officiant of x :");
scanf("%f",&b);
printf("\n\033[36mconstant term c :");
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
printf("\n'''' \033[36m       x= %f \033[93m\t\t\t\t\t       ",acceptTowvariables_tructure.Ans1);
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''   \033[36m     x= %f\033[93m \t\t\t\t\t       ",acceptTowvariables_tructure.Ans2);
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\n");

printf("\n\033[32mThank You !");
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