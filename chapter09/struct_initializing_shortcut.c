#include<stdio.h>
struct emp{
    int a;
    float b ;
    char c[30];
};
int main(){
    struct emp e1={100,64.6,"amartya"};
    struct emp e2={10056,46.45,"arrav"};
    struct emp e3={0,0,"sachin"};
    printf("\ncode is %d salary is %.2f name is %s\n",e1.a,e1.b,e1.c);
    printf("\ncode is %d salary is %.2f name is %s\n",e2.a,e2.b,e2.c);
    printf("\ncode is %d salary is %.2f name is %s\n",e3.a,e3.b,e3.c);
    return 0;
}