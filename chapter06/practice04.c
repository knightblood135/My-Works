#include<stdio.h>
int sum();
int avrage();
int main(){
    int a=3,b=5;
    sum(a,b);
    avrage(a,b);
    return 0;
}

int sum(int a,int b){
int *i;int result;
result=a+b;
i=&result;



printf("the sum of a and b is %d\n\n",*i);
return 0;
    
}
int avrage(int a,int b){
int *i;int result;
result=(a+b)/2;
i=&result;
printf("the avrage of a and b is %d\n\n",*i);
return 0;
}