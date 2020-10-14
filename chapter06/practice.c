#include<stdio.h>

int main(){
    int a=7;
    int *b;
    b=&a;
    printf("the value is %d",*b);
    return 0;
}