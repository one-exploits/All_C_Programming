/*
copyright @Arquam. All right reserved!
*/
char Decorate();
int printdetails();
int promptU_P();
#include <string.h>
#include <stdio.h>


int main(){
	int foroption;
	
    printdetails(); 
foroption=PromptU_P(); 		
if (foroption==1){
	printf("Successfull...");
	system("sleep 0.3");
    system("cls");
    Decorate();
    printdetails();
    }	
}

/*



*/
int PromptU_P(){
	char UserN[30];
	char Pss[15];		
	//True
while(1){
	printf("\n\t\t\tUsername :");
	gets(UserN);
    if( strcasecmp(UserN,"Arquam")!=0  ||  strcasecmp(UserN,"arquam")!=0  || strcasecmp(UserN,"ARQUAM")!=0  ){ 
	  continue;
	  }
	  	  
     printf("\n\t\t\tPassword :");	  
     gets(Pss);
//if
     if(strcasecmp(Pss,"majidsr")==0 ||strcasecmp(Pss,"Majidsr")==0 ||  strcasecmp(Pss,"MAJIDSR")==0 || strcasecmp(Pss,"MajidSr")==0  ){
     	return 1; 
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
    printf("###          W E L C O M E   M A J I D '        ###\n");
    printf("###\t\t\t\t\t\t###\n");
    printf("###\t\t\t\t\t\t###\n");
    printf("###\t\tsuccessfully login..            ###\n");
    printf("###\t\t\t\t      \t\t###\n"); 
    printf("###\t\t\t\t\t\t###\n");
    printf("###\t\t   Developed  by       \t \t###\n");
    printf("###\t\t         [:          \t \t###\n");
    printf("###   copyright MoArquam. All right reserved!\t###\n");
	printf("###################################################\n\n");
    return 'Y'; 
}


int printdetails(){
	char option[2];	
	printf("\n\n       N O W   Y O U   C A N   A C C E S S  ");
	printf("\n\t      ---------------------\n");
	printf("\n+------------------------------------------------+");
	printf("\n|       account        |          Tags           |");	
	printf("\n--------------------------------------------------");
	printf("\n|      Facebook        |           Fb            |");
	printf("\n--------------------------------------------------");
    printf("\n|       Whatsapp       |           Wp            |");		
	printf("\n--------------------------------------------------");
    printf("\n|     Developer        |           Dr            |");	
	printf("\n+------------------------------------------------+\n\n\n");

while (1){
  printf("\n");	
  scanf("%s",&option);
  
/*
if option is fb mean facebook detail
this ifing...
*/
if (strcmp(option,"Fb")==0 || strcmp(option,"fb")==0 ||  strcmp(option,"FB")==0 || strcmp(option,"Fb ")==0  ){
printf("+-----------------------------------------------+\n");
printf("|      Account         |      Facebook          |\n");
printf("|-----------------------------------------------|\n");

printf("|       Username       | 7878514953      \t|\n");
printf("|-----------------------------------------------|\n");
printf("|       Password       | 995647      \t\t|\n");
printf("+-----------------------------------------------+\n");
printf("|-----------------------------------------------|\n");
printf("|-----------------------------------------------|\n");
printf("|-----------------------------------------------|\n");
printf("|-----------------------------------------------|\n");
printf("|-----------------------------------------------|\n");
/*
2nd id 
*/
printf("+-----------------------------------------------+\n");
printf("|      Account         |      Facebook          |\n");
printf("|-----------------------------------------------|\n");

printf("|       Username       |mohdmajid51091@gmail.com|\n");
printf("|-----------------------------------------------|\n");
printf("|       Password       |  AlisbaKhan   \t\t|\n");
printf("+-----------------------------------------------+\n");
printf("|-----------------------------------------------|\n");
printf("|-----------------------------------------------|\n");
printf("|-----------------------------------------------|\n");
printf("|-----------------------------------------------|\n");
printf("|-----------------------------------------------|\n");
/*
2nd id 
*/
printf("+-----------------------------------------------+\n");
printf("|      Account         |      Facebook          |\n");
printf("|-----------------------------------------------|\n");

printf("|       Username       |mohdmajid8090@gmail.com |\n");
printf("|-----------------------------------------------|\n");
printf("|       Password       |   majid@3898  \t\t|\n");
printf("+-----------------------------------------------+\n");
printf("|-----------------------------------------------|\n");
printf("|-----------------------------------------------|\n");
printf("|-----------------------------------------------|\n");
printf("|-----------------------------------------------|\n");
printf("+-----------------------------------------------+\n\n");

}
/*
if option is Wp mean whatsapp detail
this ifing..
*/

else if (strcmp(option,"Wp")==0 || strcmp(option,"wp")==0 ||  strcmp(option,"WP")==0 || strcmp(option,"Wp ")==0  ){

printf("\n+-----------------------------------------------+\n");
printf("|      Account         |      Whatsapp          |\n");
printf("|-----------------------------------------------|\n");
printf("|    PhoneNumber       |    8299279858          |\n");
printf("+-----------------------------------------------+\n\n");


}

else if (NULL){

}

else if (strcmp(option,"exit")==0 || strcmp(option,"Exit")==0 ||  strcmp(option,"EXIT")==0 || strcmp(option,"Exit ")==0  ){
	break;
	
	
}
}

}	
 
 





