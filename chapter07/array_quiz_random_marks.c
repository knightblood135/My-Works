#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int marks[10];
    // for getting input marks
    // for (int i = 0; i <10; i++)
    // {
    // printf("enter marks of student %d : ",i+1);
    // scanf("%d",&marks[i]);
    // }


    // for genrating random marks

    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
       marks[i]=rand()%100 + 0;
       
    }
    
    
    
for (int i = 0; i <10; i++)
    {
    printf("the marks of students %d is : %d\n",i+1,marks[i]);
    
    }
    return 0;
}