#include<stdio.h>

int main(){
    FILE *fs;
    fs = fopen("test2.txt","w");


    char a;


    fputc('a',fs);
    
     
   
    return 0;
}