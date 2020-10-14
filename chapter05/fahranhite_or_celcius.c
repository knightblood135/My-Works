#include<stdio.h>
#include<conio.h>
float degree1(float);
float degree2(float);
int main(){ int  store;

      
  
   do
   { int store;
    printf("\n\nWhat do you whant to change\n\n(1)celcius\n(2)fehrenhitet\n\n");
    scanf("%d",&store);
    
     if (store==1)
     { float a;float result;
       printf("\n\nenter the number : ");
       scanf("%f",&a);

      result =  degree1(a);

       printf("\n\nyour value of fehrenhite is %.2f ",result);
       return 0;
     }
      else if (store==2)
      { float b;float result;
          printf("\n\nenter the number : ");
       scanf("%f",&b);

      result =  degree2(b);

       printf("\n\nyour value of celcius is %.2f ",result);
       return 0;
      }
      else if(store<1 ||store>2)
      {
          printf("\n\n*********enter a valid number 1 or 2********\n\n");

      }
      
      }while(store<1 || store>2);
      
  return 0 ;

}
float degree1(float a){
     float fehrenhite;
     fehrenhite = (a * 9 / 5) + 32;

     return fehrenhite;

    
}
float degree2(float b ){
  
    float celcius;
    celcius =((b-32)*5)/9;
    return celcius;
}