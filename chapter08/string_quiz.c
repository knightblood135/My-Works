#include<stdio.h>

int main(){
    // char a[] = {'a','m','a','r','t','y','a','\0'};
    char a[] = {"amartya"};
    char *ptr = a;
    // printf("my name is %s \n",a);
    // puts(a);
    while (*ptr !='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    
    

    return 0;
}