#include<stdio.h>
void sum(int *a,int*b);
int main(){
    int a=6,b=9;
    
    printf("value of a and b is %d,%d\n\n",a,b);
     sum(&a,&b);
    printf("value of a and b is %d,%d\n\n", a,b );


    return 0;
}

void sum(int *a,int*b){
    int hi;
    hi=*a;
    *a=*b;
    *b=hi;

}
