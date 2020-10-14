#include<stdio.h>
int main(){
   float celcius , fernhite;
 fernhite = (celcius * 9 / 5) + 32;
   
   printf("enter the value of celcius : ");  
   scanf("%f",&celcius);
   printf("value of fernhite is : %f\n",(celcius * 9 / 5) + 32);
    return 0;
  
}