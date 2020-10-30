#include<stdio.h>
void slice(char a[],int b, int i){
int j = 0;

// b-1 is used for user comfort
    for ( j;(j+(b-1))<i; j++)
    {
        a[j]=a[j+(b-1)];
    }
    a[j]='\0';
    
}
int main(){
    char a[50];
    int b , i;
    printf("Enter a name to slice : \n");
    scanf("%s",a);
    printf("Enter the range to slice : ");
    scanf("%d",&b);
    printf("to ");
    scanf("%d",&i);
  slice(a,b,i);
    printf("the slice value is : %s",a);

    return 0;
}