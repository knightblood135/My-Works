#include<stdio.h>
#include<stdlib.h>



int main(){
 
    int n;
    
   
    int *ptr;
    
    printf("enter size of array :: ");
    scanf("%d",&n);
  
     
    ptr = (int*)calloc(n,sizeof(int));

    
for (int i = 0; i <n; i++)
{

   
    printf("\n(%d)enter the value  : ",i+1);
 
    scanf("%d",&ptr[i]);
   
}
    printf("**************************");
    printf("**************************");
    
for (int i = 0; i <n; i++)
{
   
    printf("\n(%d)the  vlaue is %d : ",i+1,ptr[i]);
}
   
    return 0;
}