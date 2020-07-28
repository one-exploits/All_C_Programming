//8july 2020

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void set_option(char**,int);
int home_option(void); 
int main_setup_and_input();
void back_option(int); 
int input_as_select(void);
int last_option_after_each_calculation(int,int,int);
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
		printf("%d",func_option);
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
					exit(1);
				}
				
				
				
				}//inner loop
		
	
					
	
	
				}
	    //main options 
		else if (func_option==99){
		    main_setup_and_input();	
		}
				
	
		}	
	
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
	    	c_quadratic_alpha_beeta();
	    		
	    	
	    		}
	    else{
	      printf("\n[!] No match option :)\n");
	       exit(1);
	    
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
                int last_option;
				last_option=last_option_after_each_calculation(77,88,99);
				if(last_option==1){
					//calculate more
					continue;
				 
				 }
				else if (last_option==2){
					//back one
					//self call_Func
					recursion();
					
					}
				
				else if (last_option==3){
					//back to main menu
					main_setup_and_input();
				}
				*/
    

