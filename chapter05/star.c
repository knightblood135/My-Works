#include<stdio.h>
void sum(int n);
int main(){int n;
printf("enter a value : ");
scanf("%d",&n);
    sum(n);
    return 0;}
void sum(int n){

if (n==1)
{
    printf("*\n");
   return;
}   sum(n-1);
    for (int i = 0; i <(2*n-1); i++)
    {
        printf("*");
    }
    printf("\n");
}






  

