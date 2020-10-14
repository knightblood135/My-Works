#include<stdio.h>
int fibo();
int main(){
    int n,res;
    printf("enter the number : ");
    scanf("%d",&n);
res = fibo(n);
printf("the value is %d",res);
    return 0;
}

int fibo(int n){
    int res;
    if (n==1)
    {
       return 0;
    }
    
else if(n==2){
   
        return 1;
    }
    else
    {
        res = fibo(n-1) + fibo(n-2);
        return res;
    }
    
    
}

