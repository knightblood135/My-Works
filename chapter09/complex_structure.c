#include<stdio.h>
typedef struct emp {
int a;
int b;
}emp;
int main(){
    emp e1={23,89};
    emp e2={437,45369};
    printf("value is %d , %d\n\n",e1);
    printf("value is %d , %d\n\n",e2);
    return 0;
}