#include<stdio.h>

int main(){
    char c;
    printf("enter the leter : ");
    scanf("%c",&c);

    if (c>=65 && c<=90)
    {
        printf("it's uppercase");
    }
    else if ( c>=97 && c<=122)
    {
        printf("it's lower case");
    }
    
    
    return 0;
}