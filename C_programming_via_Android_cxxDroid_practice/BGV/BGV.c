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
//Function declaration...it must ...
float XDenominator(float,float,float,float);
//Y........
float YDenominator(float,float,float,float);
//constant function declaration;
float CDenominator(float,float,float,float);

int main(){
//variable Declaration....
  float aone,bone,cone;
  float atwo,btwo,ctwo;
  float FinalX,FinalY;	
	
	//Decoration
	printf("\t\t Mobile Num- 7007030997\n");
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
printf("%f",FinalX);

FinalY=(YDenominator(cone,ctwo,aone,atwo))/(CDenominator(aone,atwo,bone,btwo));
printf("%f",FinalY);
return 0; 
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
	
	
	
	
/*
©copyright Mo Arquam 2019 all right reserved!
*/