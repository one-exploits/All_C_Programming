int main(){
	float loop,ans,totalx;
	int limit;
	loop=1;	
	printf("  lim");
	printf("\nx----->? :");
	scanf("%d",&limit);
	
	
while(loop<=1000){
	totalx=limit-loop;
	ans=((totalx*totalx)-1)/(totalx-1);
	printf("\n  f( %f ) = %f ",totalx,ans);
	
	loop=loop-0.0000001;
	
	
	}
	
	
	}