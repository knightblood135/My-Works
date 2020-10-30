#include<stdio.h>
void encrypt(char a[]){
    char *h=a;
    for (h; *h!= '\0' ;h++)
    {
        *h=*h+50000;

    }

    
      

}
int main(){
    char a[50];
    printf("enter your message :  ");
    gets(a);

    encrypt(a);
    printf("your encrypted message is : %s",a);
    return 0;
}