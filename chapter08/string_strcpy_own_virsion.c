#include<stdio.h>
#include<string.h>
  void cpy(char a[],char b[]){

      char *j=a;
      int i;
      for (i = 0;  *j!='\0' ; i++)
      {
            b[i]=*j;
            j++;
      }
      b[i]='\0';


  }
int main(){
    char a[50]="Amartya",b[50];
    int n;
     cpy(a,b);
     printf("the value is %s \n",b);
    n = strcmp(a,b);
    printf("the value of compare is %d\n",n);
    return 0;
}