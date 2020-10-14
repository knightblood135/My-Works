#include<stdio.h>
#include<conio.h>
int main(){
    int age;
    printf("Enter your age : \n");
    scanf("%d", &age);
    if (age>=18 && age<90)
    {
        printf("you are eligible to drive the car\n", age);
    }

    else
    {
        printf("you are not elegible for driving\n", age);
    }
    
     if (age>=50 && age<100 )
     {
         printf("you have completed half century\n", age);
     }
     
     else if(age>=100){
         printf("you have completed century\n", age);
     }
     
     return 0;
}