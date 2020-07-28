/*
       x          y            1
    ________    _______     _________
       a1         b1           c1

       
       a2         b2           c2





    x                   y                   1
----------    =  ---------------- = ---------------
b1.c2 - b2.c1      c1.a2 -c2.a1      a1.b2 - a2.b1
//
//
//
//
//
//
___________________________________________________
Function_list=[

     main(),
     XDenominator(b1,b2,c1,c2),
     YDenominator(c1,c2,a1,a2),
     CDenominator(a1,a2,b1,b2),
     
  
  ]

___________________________________________________

*/
#include <stdio.h>
//ptintwith decorate
int AnsDecorate(float,float );
char Decorate();
//Function declaration...it must ...
float XDenominator(float,float,float,float);
//Y........
float YDenominator(float,float,float,float);
//constant function declaration;
float CDenominator(float,float,float,float);

int main(){
//variable Declaration....
int i=0;
for(;i<=1000;i++){
	
	
  float aone,bone,cone;
  float atwo,btwo,ctwo;
  float FinalX,FinalY;
  char LoopOp;	
//Decoration
Decorate();	
//inputting....
printf("Please Enter a1 :");
scanf("%f",&aone);
printf("\nPlease Enter b1 :");
scanf("%f",&bone);	
printf("\nPlease Enter c1 :");
scanf("%f",&cone);
printf("\n\nPlease Enter a2 :");
scanf("%f",&atwo);
printf("\nPlease Enter b2 :");
scanf("%f",&btwo);
printf("\nPlease Enter c2 :");
scanf("%f",&ctwo);
FinalX=(XDenominator(bone,btwo,cone,ctwo))/(CDenominator(aone,atwo,bone,btwo));
//printf("x== %f",FinalX);
//printf("\n");
FinalY=(YDenominator(cone,ctwo,aone,atwo))/(CDenominator(aone,atwo,bone,btwo));
//printf("y== %f",FinalY);
AnsDecorate(FinalX,FinalY);

printf("\n\nDo you want to calculate more?[y:n] :");
scanf(" %c",&LoopOp);

//iffing for lopping
if (LoopOp=='y'){
	printf("*********************************************************");
	continue;

}
else{
	printf("\n\n\n\tcopyright MoArquam 2019 All right reserved.\n\n");
    return 0;
    break;	
}




}
}
  

char Decorate(){
    printf("\n\n\t\t Mobile Num- 7007030997\n");
	printf("\t     YouTube channel- One-EXPLOITs'\n");
	printf("\n\n");
	printf("###################################################\n");
    printf("###\t\t\t\t\t\t###\n");
    printf("###\t\t\t\t\t\t###\n");
    printf("###   calculation x,y two variable equation     ###\n");
    printf("###\t\t\t\t\t\t###\n");
    printf("###\t\t\t\t\t\t###\n");
    printf("###\t\t     a1x+b1y-c1=0\t\t###\n");
    printf("###\t\t     a2x+b2y-c2=0\t\t###\n"); 
    printf("###\t\t\t\t\t\t###\n");
    printf("###\t\t\t  x=?\t\t        ###\n");
    printf("###\t\t\t  y=?\t\t        ###\n");
    printf("###   copyright MoArquam. All right reserved!\t###\n");
	printf("###################################################\n\n");
    return 'Y'; 
}




/*
######
######
######		
*/						
float XDenominator(float b1,float b2,float c1,float c2){
	float XD;
	XD=((b1*c2)-(b2*c1));	
	return XD;
	}
/*
####
####
####		
*/						
float YDenominator(float c1,float c2,float a1,float a2){	
	float YD;
	YD=((c1*a2)-(c2*a1));
	return YD; 
	}
/*
####
####
####
*/
	
float CDenominator(float a1,float a2,float b1,float b2){
	float CD;
    CD=((a1*b2)-(a2*b1));
	return CD; 	
	}							
	
int AnsDecorate(float x,float y){
printf("\n");
printf("\n''''''''''''''''''''''''''Answer'''''''''''''''''''''''''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''        x= %f \t\t\t\t\t       ",x);
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''        y= %f \t\t\t\t\t       ",y);
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n''''         \t\t\t\t\t       ''''");
printf("\n'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\n");
printf("\nThank You !");	
	
return 0; 	
	
	
	}	
	
	
/*
©copyright Mo Arquam 2019 all right reserved!
*/