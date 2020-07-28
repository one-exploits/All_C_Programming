int stringlen(char *strintp);

int main (){
	char ux[]="moarquam997320@gmail.com";
    char *uxp;
    
    stringlen(ux);

/*	int i=0;
	while (ux[i]!='\0'){
	printf("%c",ux[i]);
	i++;

		
		}

		
		printf("\n%d",i);
		
		
		*/
		
return 0; 
}

int stringlen(char *strintp){
	int i=0;
	while(i<=24){
    printf("%c",*(strintp+i));
    i++;
    }	
return 0; 	
}
