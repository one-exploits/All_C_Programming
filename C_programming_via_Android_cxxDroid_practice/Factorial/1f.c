int main(){
	int n=0;
	printf("Number for factorial : ");
	scanf("%d",&n);
    factor(n);


}
 int factor(int n){
 	int loop=0;
 	int x=1;
 	while (loop<(n)){
 	x=x*(n-loop);
 	printf("%d\n",x);
 
 	loop++;
 	}
    printf("\n\n+-------------------------------------------------+");
	printf("\n| factorial %d! ==%d   \t\t\t\t  |",n,x);
	printf("\n+-------------------------------------------------+");

	}