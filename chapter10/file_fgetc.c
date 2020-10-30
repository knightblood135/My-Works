#include<stdio.h>

int main(){
    FILE *fs;
    fs = fopen("test2.txt","r");


    char a;
    
     
       a= fgetc(fs);

    
   while (a!=EOF)
   {
      
    printf("%c",a);
       a= fgetc(fs);
    
    
   }
   
    return 0;
}