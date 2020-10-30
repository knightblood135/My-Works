#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int*)calloc(5,sizeof(int));
    for (int i = 0; i < 5; i++)

    {
        printf("\nenter the valule : ");
         scanf("%d",&ptr[i]);
        
    }
    
    for (int i = 0; i < 5; i++)

    {
        printf("\n the valule is : %d ",ptr[i]);
        

    }


        printf("\n*****************************************************\n");
  ptr = realloc(ptr,10*sizeof(int));
    for (int i = 0; i < 10; i++)

    {
        printf("\nenter the valule : ");
     
         scanf("%d",&ptr[i]);
        
    }
    
    for (int i = 0; i < 10; i++)

    {
        printf("\n the valule is : %d ",ptr[i]);
        

    }
    
    return 0;
}