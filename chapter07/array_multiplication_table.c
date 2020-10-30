#include<stdio.h>

int main(){
    int arr[10];
    int n;

    printf("enter the value of table : ");
    scanf("%d",&n);
    for(int i=0;i<10;i++){

        arr[i]=n*(i+1);
    
    printf("5 x %d = %d\n",i+1,arr[i]);}


    return 0;
    }
