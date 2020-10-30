#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr; int a;
    ptr = (int*)malloc(10*sizeof(int));
        printf("\nenter the number : ");
        scanf("%d",&a);
    for (int b, i = 0; i < 10; i++)

    {
       b = a*(i+1);
      ptr[i]=b;
    }
    
    for (int i = 0; i < 10; i++)

    {
        printf("\n %dx%d=%d ",a,i+1,ptr[i]);
        

    }


        printf("\n*****************************************************");

        
   realloc(ptr,15*sizeof(int));

      
        printf("\nenter the number : ");
        fflush(stdin);
        scanf("%d",&a);
    for (int b,i = 0; i < 15; i++)

    {
       b = a*(i+1);
      ptr[i]=b;
    }
   
    for (int i = 0; i < 15; i++)

    {
       printf("\n %dx%d=%d ",a,i+1,ptr[i]);
        

    }
    
    return 0;
}