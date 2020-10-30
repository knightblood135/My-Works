#include<stdio.h>
int com(char a[],char r){
    int j;
    char *i=a;

for(j=0;*i!='\0';i++){

        if(*i==r){
        
           
            j++;   

        }
        
    }
    return j;

}
int main(){
    char a[100];
    char r;
    int k;
    printf("\n\nenter any word :  ");
     gets(a);
     printf("\n\nenter the letter :  ");
     scanf("%c",&r);
     
    k=com(a,r);
    if(k==0)
    {    printf("\n\n  the letter is not present the occurance is ****{ %d }****\n\n",k);
    
    }
    else if (k>0)
    {
       printf("\n\n  the letter is  present and the occurance is ****{ %d }****\n\n",k);
        
    }
    
    return 0;
}