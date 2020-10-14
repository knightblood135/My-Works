#include<stdio.h>

int main(){
    int marks;

    printf("Enter your marks : \n");
    scanf("%d", &marks);
    if (marks>=90 && marks<=100)
    {
        printf("Congratulations You Got (A) Grade\n", marks);
    }
        
    else if(marks>=80 && marks<90){
        
        printf("Congratulations You Got (B) Grade\n", marks);
    }
    
    else if(marks>=70 && marks<80){
      
        printf("Congratulations You Got (C) Grade\n", marks);

    }

    else if(marks>=60 && marks<70){
      
        printf("Congratulations You Got (D) Grade\n", marks);

    } 
    else if(marks<70) {
      
        printf("Congratulations You Are Fail \n", marks);

    }
    if (marks==100)
    {
        printf("You Are Too Good\n", marks);
    }
    
    
    return 0;
}