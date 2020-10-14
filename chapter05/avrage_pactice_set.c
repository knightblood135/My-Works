#include<stdio.h>
int avrage();
int main(){
    int a,b,c; float av;
 printf("enter your first number\n");
 scanf("%d",&a);
 printf("enter your second number\n");
 scanf("%d",&b);
 printf("enter your third number\n");
 scanf("%d",&c);

 av = avrage(a,b,c);


 printf("your avrage is : %.2f ",av);
    return 0;

}
int avrage(int a,int b,  int c){

    float av;

    av = (a+b+c)/3;
    return av;

}