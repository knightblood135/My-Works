#include<stdio.h>
int sum();
int main(){
    int n,result;
    printf("enter a number : ");
    scanf("%d",&n);

result = sum(n);
printf("the value is %d",result);
    return 0;
}
int sum(int n){
   int result=0,i=1;
      if(n!=0)
   {
         result=n+ sum(n-1);
         return result;
   
}
   else
   {
       return n;
   }
   
// for (  i=1; i <=n; ++i)
// {
//     result+= i;
   
// }
// return result;

}