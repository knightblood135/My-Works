#include<stdio.h>

int main(){
    int arr[10];
    int *ptr=arr;
    ptr=ptr +2;
    if (ptr==&arr[2])
    {
    printf("yes it's correct");
    }
    else
    {
        
    printf("no it's not correct");
    }
    
    

    
    
    return 0;
}