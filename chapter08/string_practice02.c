#include<stdio.h>
#include<string.h>

int main(){
    char a[50];
    char b[50];
    char i;
    int j=0;
    printf("\nenter your name : ");
    gets(a);

    printf("\nenter your second name : ");
    while (i!='\n')
     {  //fflush(stdin);
        scanf("%c",&i);
        b[j]=i;
        j++;
    }
    b[j-1]='\0';
    printf(" your name is : %s\n",a);
    printf(" your second name is : %s\n",b);
    printf("the compare value is : %d ",strcmp(a,b));

    return 0;
}