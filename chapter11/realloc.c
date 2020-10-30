#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
     ptr = (int*)malloc(5*sizeof(int));
    for(int a=0;a<5;a++){

        printf("(%d)enter any vlaue : ",a+1);
        scanf("%d",&ptr[a]);
    }
    for(int a=0;a<5;a++){

        printf("(%d)the  vlaue is %d : \n",a+1,ptr[a]);
      
    }

    printf("***************************");
    printf("***************************");
     ptr = realloc(ptr,7*sizeof(int));
    for(int a=0;a<7;a++){

        printf("(%d)enter any vlaue : ",a+1);
        scanf("%d",&ptr[a]);
    }
    for(int a=0;a<7;a++){

        printf("(%d)the  vlaue is %d : \n",a+1,ptr[a]);
      
    }


    return 0;
}