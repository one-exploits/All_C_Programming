#include<stdio.h>
#include<math.h>
float Distance();
int main(){
float Final_answer=0;
Final_answer=Distance();
printf("Distance= %f",Final_answer);
return 0;
}
float Distance(){
      float x_one,x_two,y_one,y_two;
      float Final_answer;
      printf("Enter xone: \n");
      scanf("%f",&x_one);
      printf("Enter xtwo: \n");
      scanf("%f",&x_two);
      printf("Enter yone: \n");
      scanf("%f",&y_one);
      printf("Enter ytwo: \n");
      scanf("%f",&y_two);
     float squrex,squrey;
  squrex=((x_one)-(x_two))*((x_one)-(x_two));
   squrey=((x_one)-(y_two))*((y_one)-(y_two));
  Final_answer=sqrt(squrex+squrey);
  return Final_answer; 
  }  
      

