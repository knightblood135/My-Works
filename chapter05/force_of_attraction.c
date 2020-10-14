#include<stdio.h>
float force(float);
int main(){
    float mass,f;
    printf("enter the mass of object : ");
    scanf("%f",&mass);
  f =   force(mass);
    printf("the value of force is : %.3f",f);
    return 0;
}

float force(float mass){

    float g=9.8,f;
   f = g*mass;
return f;

}