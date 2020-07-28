int main(){
  int array[]={1,2,2,3,4,4};
  int *x[10];
  x[0]=array;	
  for(int i=0;i<6;i++)
  {
  	printf("%d\n",x[0][i]);
  }
  
}