#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
     ptr = (float*)malloc(6*sizeof(float));
    for(int a=0;a<5;a++){

        printf("(%d)enter any vlaue : ",a+1);
        scanf("%f",&ptr[a]);
    }
    for(int a=0;a<5;a++){

        printf("(%d)the  vlaue is %f : \n",a+1,ptr[a]);
      
    }
    return 0;
}