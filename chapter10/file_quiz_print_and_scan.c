#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("test1.txt","w");
    int a=8234;

    fscanf(ptr,"%s",&a);
   // fprintf(ptr," gammer %d",a);
   
    return 0;
}