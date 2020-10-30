#include<stdio.h>

int main(){
    FILE *ps,*pa;
    ps = fopen("a.txt","r");
    pa = fopen("b.txt","w");
    

    char a = fgetc(ps);
    while (a!=EOF){
    // fputc(a,pa);
    // fputc(a,pa);
     fprintf(pa,"%c",a);
    fprintf(pa,"%c",a);
    a = fgetc(ps);
       
    }

    fclose(ps);
    fclose(pa);
    

    
    
    return 0;
}