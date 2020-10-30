#include<stdio.h>
#include<string.h>
struct emp{
  int c;
  float s;
  char n[50];

};
int main(){
    struct emp e1;
    e1.c=98369783;
    e1.s=100000000;
    strcpy(e1.n,"amartya");
struct emp e2;
    e2.c=987589;
    e2.s=99999;
    strcpy(e2.n,"aarav");
struct emp e3;
    e3.c=629863623;
    e3.s=99;
    strcpy(e3.n,"sachin");

        printf("\ncode of %s is %d and its salary is %.2f\n",e1.n,e1.c,e1.s);
        printf("\ncode of %s is %d and its salary is %.2f\n",e2.n,e2.c,e2.s);
        printf("\ncode of %s is %d and its salary is %.2f\n",e3.n,e3.c,e3.s);
    


    return 0;
}