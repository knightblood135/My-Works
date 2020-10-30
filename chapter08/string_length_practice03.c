#include<stdio.h>
#include<string.h>

int main(){
    char str[]={"amartya mahato"};
    char *ptr = str;
    int i;
    //int a = strlen(ptr);
    //printf("there are %d caracter in the string\n",a);
    // both types
    for ( i = 0; *ptr != '\0'; i++,ptr++)
    {

    }
        printf("\nthere are %d caracter in the string\n",i);
    
    return 0;
}