#include<stdio.h>

int main(){int a,k;
    FILE *p;
    p=fopen("p.txt","r");
     
     fscanf(p,"%d",a);
  while(a!=EOF){
      
     fscanf(p,"%d",a);
     
   a=a+1;
  }
     
   
    p=fopen("p.txt","a");
   
    fprintf(p,"\n%d",k);
    return 0;
}