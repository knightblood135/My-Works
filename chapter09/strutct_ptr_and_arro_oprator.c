#include<stdio.h>
struct emp{
int a;
};
int main(){
    struct emp e1;
    struct  emp *ptr;
     ptr= &e1;
    // (*ptr).a=2535;
    //printf("value is %d\n",(*ptr).a);
    // or 
    ptr->a=45643;
    printf("value is %d\n",ptr->a);



    
    return 0;
}