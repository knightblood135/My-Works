#include<stdio.h>
int change();
int main(){
    int b=99;
   b= change(b);
printf("%d",b);
    return 0;
}
int change(int a){

   
    a=55;
    return a;
}