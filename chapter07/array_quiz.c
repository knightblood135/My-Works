#include<stdio.h>
#include<math.h>
int main(){
    
   float b=5;
    float *ptr = &b;
    float **ptr2 = &ptr;
    float ***i = &ptr2;
    printf("the value of ptr is : %u\n",ptr2);
    // ptr=ptr-1;
    // ptr=ptr+1;
    // ptr++;
    // ptr--;
//    ptr2 = ptr2 - 1;
//  ptr2 = ptr2 + 1;
 
    printf("the value of i is : %u\n",i);
    return 0;
}