#include<stdio.h>
int factorial();
int main(){
    int a,b;
    printf("enter the number : ");
    scanf("%d",&a);
   b= factorial (a);
   printf("factorial is : %d",b);

    return 0;
}

int factorial (int a){
int f;

if (a==0|| a==1)
{
   return 1;
}
else
{
    f=a*factorial(a-1);
    return f;
}


}