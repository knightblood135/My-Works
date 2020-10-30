#include<stdio.h>

int main(){
    FILE *ptr;
    int a,b;

     
      ptr = fopen("modify.txt","r");
      fscanf(ptr, "%d",&a);
      ptr = fopen("modify.txt","w");
     b = a*2;
     fprintf(ptr,"%d",b);


    return 0;
}