#include<stdio.h>

int main(){
int a=2;
int *b;

b=&a;
printf("value of a is %d\n",a);
printf("value of b is %d\n",b);
printf("value of b is %d\n",*b);
printf("address of a is %u\n",&a);
printf("address of b is %u\n",&b);
printf("address of a is %d\n",*(&a));




    return 0;
}