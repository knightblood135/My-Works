#include<stdio.h>
typedef struct emp {
int a;
int b;
}emp;
void show(emp d1,emp d2){

    printf("value is %d , %d\n\n",d1.a,d1.b);

    printf("value is %d , %d\n\n",d2.a,d2.b);
}
int main(){
    emp e1,e2;
    printf("enter the value : \n");
    scanf("%d %d",&e1.a,&e1.b);
    printf("enter the second value : \n");
    scanf("%d %d",&e2.a,&e2.b);
    
   
    show(e1,e2);
    return 0;
}