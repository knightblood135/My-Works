#include<stdio.h>
#include<math.h>

int sum();
int main(){
    int a,b;
    printf("enter the side : ");
    scanf("%d",&a);
   b= sum (a);
   printf("area of a square is : %d",b);
    
    return 0;
}
int sum(int a){
    int b;
    b = pow(a,2);
    return b;
}



