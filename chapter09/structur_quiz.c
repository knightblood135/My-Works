#include<stdio.h>
#include<string.h>
struct emploee{
int code;
float salary;
char name[30];
};
int main(){
    struct emploee e1;
    e1.code=468393;
    strcpy(e1.name,"amartya");
    e1.salary=400.245;

    printf("\nyour salary is %f\nand your code is %d\nand your name is %s\n",e1.salary,e1.code,e1.name);
    
    return 0;
}