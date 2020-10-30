#include<stdio.h>
#include<string.h>
int occurance(char a[],char r){
     char *i=a;
     int j;

    for ( j=0; *i!='\0'; i++)
    {
        if(*i==r){
              j++;
            
        }
    }
    return j;
    
}
int main(){
    char a[50];
    char r;
    
     printf("\n\nenter any word :  ");
     gets(a);
     printf("\n\nenter the letter :  ");
     scanf("%c",&r);
     occurance(a,r);
     

     printf("\n\n the occurance of the letter is: %d ",occurance(a,r));
    return 0;
}