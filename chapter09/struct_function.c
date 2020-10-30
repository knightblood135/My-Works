#include<stdio.h>
#include<string.h>
struct mem 

{
    int a;
    float b;
    char c[50];
    
    
};
void show(struct mem emo){

    printf("\nthe code is %d salary is %f and name is %s\n\n",emo.a,emo.b,emo.c);

}
int main(){
    struct mem e1;
    struct mem *ptr=&e1;
    ptr->a=38563209;
    ptr->b=45000.34387;
    strcpy(ptr->c,"amartya");
    show(e1);


    return 0;
}