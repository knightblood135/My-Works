#include<stdio.h>
#include<stdlib.h>

int main(){
  
    int *ptr;
    ptr = (int*)malloc(6*sizeof(int));
    for(int i=0;i<6;i++){

    printf("enter any value  : ");
  
    scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++){

    printf("\nthe  value  is  : %d",ptr[i]);
    
    }


    return 0;
}