#include<stdio.h>

int main(){
    FILE *ptr;
    int a;
    char b;
    int c;
    ptr = fopen("test1.txt","r");
    if(ptr==NULL){
        printf("file doesn't exists");

    }
    else{
        fscanf(ptr,"%d %c %d",&a,&b,&c);
        fclose(ptr);
        printf("%d%c%d",a,b,c);
    }
    return 0;
}