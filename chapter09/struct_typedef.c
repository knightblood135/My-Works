#include<stdio.h>
#include<string.h>
typedef  struct employee{
    int a;
} emp;
void show(emp epp){

     printf("\n\nyour code is %d \n",epp.a);
}
int main(){
    // struct employee e1;
    // or you can write emp only after  typing typedef in front of struct 
    emp e1;
     e1.a=356438;
     show(e1);
    return 0;
}