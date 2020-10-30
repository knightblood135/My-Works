#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>


int main(){
    int num,i , gus=1;

    srand(time(0));

    num=rand()%100 + 0;
 
   printf("\n\n*************Number guessing game by knight************\n\n\n");

    do{
    
 printf("enter a number between (0 to 100) : ");
    scanf("%d",&i);

       gus++;

        if (i<num)
        {
           printf("\n\nenter a greater number \n\n\n");
            
        }
        else if (i>num)
        {
            printf("\n\nenter a lower number \n\n\n");
            
        }
        else
        {
            printf("\n\n\n***********congratulations you guessed the number %d after %d guessing************* \n",num,gus);
            
        }
        
        
        


    }while ( i!=num);
    


   getch();

    return 0;
}