#include<stdio.h>

int main(){
    int num,i=1,fact=1;
    printf("type a number : ");
    scanf("%d",&num);
    //for(i;i<=num;i++)
while (i<=num)
{
  fact*=i;
  i++;
}
printf("factorial : %d\n",fact);
    
    return 0;
}