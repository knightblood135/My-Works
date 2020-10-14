#include<stdio.h>

int main(){
    int a=3;
    int *i;
    int **j;
    i=&a;
    j=&i;
    printf("the value of a is %d\n\n",**j);
    return 0;
}