#include<stdio.h>

int main(){
        int num1, num2 ,num3, num4;
    printf("enter your four number : \n ");
    scanf("%d %d %d %d", &num1,&num2,&num3,&num4);
    
    if (num1>num2)
    {
        if (num1>num3)
        {
            if (num1>num4)
            {
               printf("%d is the greatest number",num1);
            }
            
                
            }
            
        }
    else if (num2>num3)
        {
            if (num2>num4)
            {
                printf("%d is the greatest number",num2);
            }
            
        }
    else if (num3>num4)
    {
        printf("%d is the greatest number",num3);
    }

      else
      {
          printf("%d is the greatest number",num4);
      }
        
    return 0;
}