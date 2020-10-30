#include<stdio.h>

int main(){
    FILE *fpp;
    char a[50];
    char b[50];
    fpp = fopen("test2.txt","r");
    fscanf(fpp,"%s",a);
    printf("%s",a);

    fpp = fopen("test2.txt","a");
    fprintf( fpp,"amartya\n",a);
    fpp = fopen("test2.txt","r");
    fgets(b,30,fpp);
    fclose(fpp);
    printf("%s",b);


    return 0;
}