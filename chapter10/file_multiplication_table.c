#include<stdio.h>

int main(){
    FILE *ptr;
    int a,b;
    printf("enter a number : ");
    scanf("%d",&a);

    ptr = fopen("pr02.txt","w");
    for (int i = 0; i < 10; i++)
    {
        b=a*(i+1);
    fprintf(ptr,"%dx%d=%d\n",a,i+1,b);
    printf("%dx%d=%d\n",a,i+1,b);
    }

    

    return 0;
}