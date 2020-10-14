#include<stdio.h>
int sum ();
int main(){
 int a=7;
    
    
printf("the value of a is %d\n\n",a);
printf("the address of a is %u\n\n",&a);
sum(a);

   
    return 0;
}
int sum (int b){
    

printf("the address of b is %u\n\n",&b);
printf("the value of b is %d\n\n",b);


return 0;

}