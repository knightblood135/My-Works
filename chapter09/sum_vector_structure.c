#include<stdio.h>
typedef struct emp {
int a;
int b;
}emp;
void a(emp e1,emp e2){

    printf("sum value is %d \n\n",e1.a+e1.b);
    printf("sum value is %d \n\n",e2.a+e2.b);
}
int main(){
    emp e1={23,89};
    emp e2={437,45369};
    printf("value is %d , %d\n\n",e1);
    printf("value is %d , %d\n\n",e2);
    a(e1,e2);
    return 0;
}