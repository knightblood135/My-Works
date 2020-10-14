#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
    
    int chess, quantity;
    float  finalprice, totalprice , discount ,total, quan;
    totalprice ;

     
     printf("COST OF ITEM\n\n (1)==> chessboard ==> 500rs\n\n (2)==> ball ==> 100rs\n\n (3)==> mouse ==> 300rs\n\n (4)==> keyboard ==> 400rs\n\n (5)==> phone ==> 30000rs\n\n");

     printf("type the number of item ==> : ");
    scanf("%d",&chess);

    
    
   if (chess==1)
   {
       printf("\n\n\nyou bought chessboard of : 500rs\n\n\n\n"); 
   
   }
    else if (chess==2){
        printf("\n\n\nyou bought ball of : 100rs\n\n\n\n");
    }
    else if(chess==3){
        printf("\n\n\nyou bought mouse of : 300rs\n\n\n\n");
    }
   
     else if(chess==4){
        printf("\n\n\n bought keyboard of : 400rs\n\n\n\n");
    }
   else if(chess==5){
        printf("\n\n\nyou bought phone of : 30000rs\n\n\n\n");
    }
   else
    {
       printf("type number brtween 1 to 5\n");
        
    }
    printf("type the given price of the item : ");
     scanf("%f", &totalprice);
    
    if (totalprice==500)
    {
        
    
    
    printf("How much discount do you need {YOU CAN TYPE IN DECIMEL ALSO} : ");
     scanf("%f", &discount);
     

    finalprice = totalprice- (discount/100)*totalprice;

    printf("\n\nyour final price is : %f\n\n", finalprice);

    
   
    

    printf(" \n\n\n\n\n\n\n\n\n\n\n\ntype the quantity of item you will purchase : ");
    scanf("%f", &quan); 
    if (quan>0)
    {
     printf("\n\n\nyour quantity of item is %f\n\nand your final price is %f\n\n", quan, finalprice);

     total = quan*finalprice;
      printf("so your total price is : %f\n\n and you got discount of : %f\n\n ",total,discount);


    }
    else
    {
        printf("please type number greater than zero \n");
    
    }}
   else if (totalprice==100)
    {
        printf("\n\n\nHow much discount do you need {YOU CAN TYPE IN DECIMEL ALSO} : ");
     scanf("%f", &discount);
     

    finalprice = totalprice- (discount/100)*totalprice;

    printf("\n\nyour final price is : %f\n\n", finalprice);

    
   
    

    printf("\n\n\n\n\n\n\n\n\n\n\n\n type the quantity of item you will purchase : ");
    scanf("%f", &quan); 
    if (quan>0)
    {
     printf("\n\n\nyour quantity of item is %f\n\nand your final price is %f\n\n", quan, finalprice);

     total = quan*finalprice;
      printf("so your total price is : %f\n\n and you got discount of : %f\n\n ",total,discount);


    }
    else
    {
        printf("please type number greater than zero \n");
    
    }
    }

   else if (totalprice==300)
    {
        printf("\n\n\nHow much discount do you need {YOU CAN TYPE IN DECIMEL ALSO} : ");
     scanf("%f", &discount);
     

    finalprice = totalprice- (discount/100)*totalprice;

    printf("\n\nyour final price is : %f\n\n", finalprice);

    
   
    

    printf("\n\n\n\n\n\n\n\n\n\n\n\n type the quantity of item you will purchase : ");
    scanf("%f", &quan); 
    if (quan>0)
    {
     printf("\n\n\nyour quantity of item is %f\n\nand your final price is %f\n\n", quan, finalprice);

     total = quan*finalprice;
      printf("so your total price is : %f\n\n and you got discount of : %f\n\n ");


    }
    else
    {
        printf("please type number greater than zero \n");
    
    }
    }
   else if (totalprice==300)
    {
        printf("\n\n\nHow much discount do you need {YOU CAN TYPE IN DECIMEL ALSO} : ");
     scanf("%f", &discount);
     

    finalprice = totalprice- (discount/100)*totalprice;

    printf("\n\nyour final price is : %f\n\n", finalprice);

    
   
    

    printf("\n\n\n\n\n\n\n\n\n\n\n\n type the quantity of item you will purchase : ");
    scanf("%f", &quan); 
    if (quan>0)
    {
     printf("\n\n\nyour quantity of item is %f\n\nand your final price is %f\n\n", quan, finalprice);

     total = quan*finalprice;
      printf("so your total price is : %f\n\n and you got discount of : %f\n\n ",total,discount);


    }
    else
    {
        printf("please type number greater than zero \n");
    
    }
    }
   else if (totalprice==400)
    {
        printf("\n\n\nHow much discount do you need {YOU CAN TYPE IN DECIMEL ALSO} : ");
     scanf("%f", &discount);
     

    finalprice = totalprice- (discount/100)*totalprice;

    printf("\n\nyour final price is : %f\n\n", finalprice);

    
   
    

    printf(" \n\n\n\n\n\n\n\n\n\n\n\ntype the quantity of item you will purchase : ");
    scanf("%f", &quan); 
    if (quan>0)
    {
     printf("\n\n\nyour quantity of item is %f\n\nand your final price is %f\n\n", quan, finalprice);

     total = quan*finalprice;
      printf("so your total price is : %f\n\n and you got discount of : %f\n\n ",total,discount);


    }
    else
    {
        printf("please type number greater than zero \n");
    
    }
    }
  else  if (totalprice==30000)
    {
        printf("\n\n\nHow much discount do you need {YOU CAN TYPE IN DECIMEL ALSO} : ");
     scanf("%f", &discount);
     

    finalprice = totalprice- (discount/100)*totalprice;

    printf("\n\n final price is : %f\n\n", finalprice);

    
   
    

    printf(" \n\n\n\n\n\n\n\n\n\n\n\ntype the quantity of item you will purchase : ");
    scanf("%f", &quan); 
    if (quan>0)
    {
     printf("\n\n\nyour quantity of item is %f\n\nand your final price is %f\n\n", quan, finalprice);

     total = quan*finalprice;
      printf("so your total price is : %f\n\n and you got discount of : %f\n\n",total,discount);


    }
    else
    {
        printf("please type number greater than zero \n");
    
    }
    }

    else
    {
        printf("please write the given amount\n\n");
    }
     if (chess==1)
     {
        printf("you bought %d chessboard of : %f\n\n",quantity,finalprice);
     }
     else if (chess==2)
     {
        printf("you bought %d ball of : %f\n\n",quantity,finalprice);
     }
     
     else if (chess==3)
     {
        printf("you bought %d mouse of : %f\n\n",quantity,finalprice);
     }
     else if (chess==4)
     {
        printf("you bought %d keyboard of : %f \n\n",quantity,finalprice);
     
     }else if (chess==5)
     {
        printf("you bought %d phone of : %f \n\n",quantity,finalprice);
     }

    printf("PAY YOUR TOTAL AMOUNT TO AMARTYA MAHATO paytm no. 96xxxxx674 { have a good day}\n\n");

    getch();
    return 0;
}