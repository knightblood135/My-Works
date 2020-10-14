#include<stdio.h>

int main(){
    int i=0,n;
    scanf("%d",&n);
    do{
    printf("%d\n",i++);
    }
    while(i<=n);
    return 0;
}