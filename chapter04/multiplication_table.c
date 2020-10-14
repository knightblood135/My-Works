#include<stdio.h>
int main(){
     int i,n;

    printf("write the number : ");
    scanf("%d",&n);

    for(i=0;i<=10;i++){
        printf("%d\n",i*n);
    }
    return 0;
}