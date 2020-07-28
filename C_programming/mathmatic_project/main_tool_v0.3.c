//8july 2020

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<math.h>
void set_option(char**,int);
int home_option(void); 
int main_setup_and_input();
void back_option(int); 
int input_as_select(void);
int last_option_after_each_calculation(int,int,int);
float c_quadratic_alpha_beeta();
float c_linear_equation_in_two_variable(void);
void exit_failure_massage(int);
float c_quadratic_equation(void);

//<class name="class Linear_equation:">

int AnsDecorate(float,float );
char Decorate();
//Function declaration...it must ...
float XDenominator(float,float,float,float);
//Y........
float YDenominator(float,float,float,float);
//constant function declaration;
float CDenominator(float,float,float,float);
//</class name="class Linear_equation:">
// ######################################################

//<class name="quadratic_equation:">
struct ReturnTwo{
	float Ans1;
	float Ans2;
	};
struct ReturnTwo ReturnTwosridracharya(float,float,float);

// </class name="quadratic_equation:">




/*
*/
char *polynomial[]={"Generate Quadratic Equation Using (Alpha,Beeta)"};
int num_polynomial=1;

char *linear_equation_in_two_variable[]={"Linear Equation In Two Variable"};
int num_linear_equation_in_two_variable=1;

char *quadratic_equation[]={"Quadratic Equation","Discriminant"};
int num_quadratic_equation=2;

char *arithmatic_progression[]={"Nth Term","Sum Of Term","Number Of Term In Sum Of Term","Number Of Term In AP:"};//4
int num_arithmatic_progression=4;

char *co_ordinate_geometry[]={"Distance Between two Co-Ordinate","Co-Ordinate Of Internal Division","Co-Ordinate Of External Division","Proof Of Being A Line","Area Of Triangle with Co-Ordinate"};
int num_co_ordinate_geometry=5;

char *area_related_to_circle[]={"Area Circle","Area Sector","Area Segment","Area Triangle In Circle With Any Angle"};
int num_area_related_to_circle=4;

char *surface_area[]={"Totale Surface Area Of Sphere","Area Semi Sphere","Area Cylinder"};
int num_surface_area=3;

char *volume[]={"Volume Of Cube","Volume Of Cuboid","Volume Of Sphere","Volume Of Semi Sphere","Volume Of Cone"};
int num_volume=5;




void set_option(char *list[],int number_of_element_in_list){
	
   	for (int i=0;i<number_of_element_in_list;i++){
   	printf("   :::[%d] %s\n",(i+1),list[i]);
   	   	
   }

		
   }

void back_option(int key){
 printf("   :::[%d] Go Back To Home Menu :) \n",key);	
	
}

int input_as_select(){
		
	int option_input;
	printf("\n\n\nselect:/> ");
	scanf("%d",&option_input);
	return option_input; 
}


//for input wrong in option massage
void exit_failure_massage(int for_address){
	        printf("\nNot Integer Input...An Error Occourred. At %p Address!\n",&for_address);
			printf("Program Terminating...\n");
			sleep(2);
		    exit(EXIT_FAILURE);	

}


int home_option(){
	      printf("\nPOLYNOMIAL ENUMERATION :\n");	
          set_option(polynomial,1);
          
          printf("\nlINEAR EQUATION IN TWO VARIABLE ENUMERATION :\n");
          set_option(linear_equation_in_two_variable,num_linear_equation_in_two_variable);
          
          printf("\nQUADRATIC EQUATION ENUMERATION :\n");
          set_option(quadratic_equation,num_quadratic_equation);
          
          printf("\nARITHMATIC PROGRESSION ENUMERATION :\n");
          set_option(arithmatic_progression,num_arithmatic_progression);
          
          printf("\nCO-ORDINATE GEOMETRY ENUMERATION :\n");
          set_option(co_ordinate_geometry,num_co_ordinate_geometry);
          
          printf("\nAREA RELATED TO CIRCLE ENUMERATION :\n");
          set_option(area_related_to_circle,num_area_related_to_circle);
          
          
          printf("\nSURFACE AREA EQUATION ENUMERATION :\n");
          set_option(surface_area,num_surface_area);
          
          printf("\nVOLUME ENUMERATION :\n");
          set_option(volume,num_volume);
    
    printf("\n\n\n\t\t\tS e l e c t\n\n");
    printf("\tO p t i o n s   t o    E n u m e r a t e :)\n");
    printf("\n\n[1] POLYNOMIAL ENUMERATION \n");	
    printf("[2] lINEAR EQUATION IN TWO VARIABLE ENUMERATION \n");
    printf("[3] QUADRATIC EQUATION ENUMERATION \n");
    printf("[4] ARITHMATIC PROGRESSION ENUMERATION \n");
    printf("[5] CO-ORDINATE GEOMETRY ENUMERATION \n");
    printf("[6] AREA RELATED TO CIRCLE ENUMERATION \n");
    printf("[7] SURFACE AREA EQUATION ENUMERATION \n");
    printf("[8] VOLUME ENUMERATION \n");
   
             
                   
        	
	
	
return 0; 	
}

int last_option_after_each_calculation(int more,int one_back,int back_main_menu){
	int status;
	printf("\n\n\n###[%d] Do You Want To Calculate More !...\n",more);
	printf("###[%d] Do You Want To Back One !...\n",one_back);
	printf("###[%d] Do Want To Back Main Menu !... \n",back_main_menu);
	printf("###[!] Press.. Any key to exit !...\n");
	scanf("%d",&status);
	return status; 
	
}



/////////////////////////////////////////
/////All Mathematical Function blew//////
/////////////////////////////////////////


//calculate quadratic alpha beeta
float c_quadratic_alpha_beeta(){
	while(1){
	  int func_option;
	    printf("\n\n");
		set_option(polynomial,num_polynomial);//here display all option of main options
	    back_option(99);//print back option key 99
		func_option=input_as_select();//simply function to inputing 
	
			if (func_option==1){
				while(1){
				float alpha,beeta;
				float sum_of_alpha_beeta;
				float alpha_into_beeta;
				char sign_of_plus_minus;
				char sign_of_second_plus_minus;
				printf("\n\n\t\t##### ENTER ALPHA AND BEETA #### \n");
				printf("\nEnter Alpha value :");
				scanf("%f",&alpha);
				printf("\nEnter Beeta value :");
				scanf("%f",&beeta);
				//calculation part here
				sum_of_alpha_beeta=(alpha)+(beeta);
				alpha_into_beeta=(alpha)*(beeta);
				if (sum_of_alpha_beeta>0){
					//positive
					sign_of_plus_minus='-';
				}else if (sum_of_alpha_beeta<0){
					sum_of_alpha_beeta=(sum_of_alpha_beeta)*(-1);
					sign_of_plus_minus='+';
				}
				
				if (alpha_into_beeta>0){
					sign_of_second_plus_minus='+';
					
				}
				else if (alpha_into_beeta<0){
					alpha_into_beeta=(alpha_into_beeta)*(-1);
					sign_of_second_plus_minus='-';
				}
				
				
				
				printf("\n\n\t\t########## A n s w e r ###########\n\t\tx^2%c(%f)x%c(%f)\n\t\t########## A n s w e r ###########",sign_of_plus_minus,sum_of_alpha_beeta,sign_of_second_plus_minus,alpha_into_beeta);
				
				int last_option;
				last_option=last_option_after_each_calculation(77,88,99);
				if(last_option==77){
					continue;
				 
				 }
				else if (last_option==88){
					c_quadratic_alpha_beeta();
					
					}
				
				else if (last_option==99){
					main_setup_and_input();
						
				}
				else{
					exit(EXIT_SUCCESS);
				}
				
				
				
				}//inner loop
		
	
					
	
	
				}
	    //main options 
		else if (func_option==99){
		    main_setup_and_input();	
		}

		else
		{
			  exit_failure_massage(func_option);
		}
		
				
	
		}//first_loop	
	
return 0; 	
}

/*
***************************************************************************************************************************
**************************************function for calculate linear equation***********************************************
***************************************************************************************************************************
*/
float c_linear_equation_in_two_variable(){

while (1)
{

        int func_option;
	    printf("\n\n");
		set_option(linear_equation_in_two_variable,num_linear_equation_in_two_variable);//here display all option of main options
	    back_option(99);//print back option key 99
		func_option=input_as_select();
        
		if (func_option==1)
		{
				
	         while (1)
	        {  	
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
						
				//for last option 		
				int last_option;
				last_option=last_option_after_each_calculation(77,88,99);
				if(last_option==77){
					//calculate more
					continue;
				 
				 }
				else if (last_option==88){
					//back one
					//self call_Func
					c_linear_equation_in_two_variable();
					
					}
				
				else if (last_option==99){
					//back to main menu
					main_setup_and_input();
	
				}
				else{
					exit(EXIT_SUCCESS);
				}
				

    
           }//second loop
		}

		else if (func_option==99)
		{
			  main_setup_and_input();
		}
		else
		{
			exit_failure_massage(func_option);
		}
		
		

}//first while loop
return 0;
}




/////////////////////////////////////////////////////////////////////////
///////////quadratic_equation function here/////////////////////////////
////////////////////////////////////////////////////////////////////////
float c_quadratic_equation(void){
	while (1)
	{
        int func_option;
	    printf("\n\n");
		set_option(quadratic_equation,num_quadratic_equation);//here display all option of main options
	    back_option(99);//print back option key 99
		func_option=input_as_select();

		if(func_option==1)
		       while(1){
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
               //for last option 		
				int last_option;
				last_option=last_option_after_each_calculation(77,88,99);
				if(last_option==77){
					//calculate more
					continue;
				 
				 }
				else if (last_option==88){
					//back one
					//self call_Func
					c_quadratic_equation();
					
					}
				
				else if (last_option==99){
					//back to main menu
					main_setup_and_input();
	
				}
				else{
					exit(EXIT_SUCCESS);
				}

		      }//option1_loop_okk
/////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
/////////////////////discriminant//////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
	else if (func_option==2)//discriminant section
	{
		while (1)
		{


		  float aa,bb,cc,c_discriminant;
	     	        printf("\t\t Mobile Num- 7007030997\n");
					printf("\t     YouTube channel- One-EXPLOITs'\n");
					printf("\n\n");
					printf("###################################################\n");
    				printf("###\t\t\t\t\t\t###\n");
    				printf("###\t\t\t\t\t\t###\n");
  					printf("###  calculation x squre equation Discriminant  ###\n");
  				    printf("###\t\t\t\t\t\t###\n");
    				printf("###\t\t\t\t\t\t###\n");
    				printf("###\t\t     ax^2+bx+c=0\t\t###\n");
    				printf("###\t\t\t  x=?\t\t        ###\n");
    				printf("###\t\t\t  x=?\t\t        ###\n");
    				printf("###   copyright MoArquam. All right reserved!\t###\n");
					printf("###################################################\n");
		        printf("\n\nco-officiant of x squre :");
                scanf("%f",&aa);
                printf("\nco-officiant of x :");
                scanf("%f",&bb);
                printf("\nconstant term c :");
                scanf("%f",&cc);    
	            c_discriminant=(bb*bb)-1*(4*aa*cc);
			printf("\n''''''''''''''''''''''''''Answer'''''''''''''''''''''''''''");
  			printf("\n''''         \t\t\t\t\t       ''''");
  			printf("\n''''         \t\t\t\t\t       ''''");
  			printf("\n''''         \t\t\t\t\t       ''''");
  			printf("\n''''            Discriminant= %f \t\t\t\t\t       ",c_discriminant);
  			printf("\n''''         \t\t\t\t\t       ''''");
  			printf("\n''''         \t\t\t\t\t       ''''");
  			printf("\n''''         \t\t\t\t\t       ''''");
  			printf("\n''''            \t\t\t\t\t       ");
  			printf("\n''''         \t\t\t\t\t       ''''");
  			printf("\n''''         \t\t\t\t\t       ''''");
  			printf("\n'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\n");
               //for last option 		
				int last__option;
				last__option=last_option_after_each_calculation(77,88,99);
				if(last__option==77){
					//calculate more
					continue;
				 
				 }
				else if (last__option==88){
					//back one
					//self call_Func
					c_quadratic_equation();
					
					}
				
				else if (last__option==99){
					//back to main menu
					main_setup_and_input();
	
				}
				else{
					exit(EXIT_SUCCESS);
				}

                    






		}
    
	}
	
	
	else if (func_option==99)
		{
			  main_setup_and_input();
		}
	else
		{
			exit_failure_massage(func_option);
		}
	


	}//first loop 

	return 0;
}






int main_setup_and_input(){
	while(1){
	//homeFunction
	home_option();
	int option_input;
	printf("\n\n\nselect:~# ");
	scanf("%d",&option_input);
	    //ifing for main option
	    if (option_input==1){
            //alpha beeta using 
	    	c_quadratic_alpha_beeta();
	    		}
        //this option for creating calculating the linear equatin in two variable 
        //okk 
        //option 2	
        else if (option_input==2)
        {
            c_linear_equation_in_two_variable();
            
        }
		else if (option_input==3)
		{
		   c_quadratic_equation();
		}

		else
		{
			exit_failure_massage(option_input);
		}
		
    }
     		
return 0; 	
}








int main(){
          main_setup_and_input();
          return 0; 
    }
    
    
/*   
              
                last_option_after_each_calculation(77,88,99);
                
/*

//#################################################################################################
//#########################################class section blew######################################
//#################################################################################################

why class section:
	beacase of smaal small funtion needed in program to calculate
	so vitual class needed okk 

*/









//<class name="class Linear_equation:">

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

//        </class name="class Linear_equation:">



/*
##############################################################################################################################
###################################################quadratic_equation#########################################################
##############################################################################################################################
*/

//<class name="quadratic_equation:">

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
//</class name="quadratic_equation:">



