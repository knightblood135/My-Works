#include<stdio.h>
typedef struct data{
    int date,month ,year,hour,min;
}ss;
int show(ss d1,ss d2){
   if (d1.year>d2.year)
{
    return 1;
   }
   if (d1.year<d2.year)
{
    return -1;
   }
   if (d1.month>d2.month)
{
    return 1;
   }
   if (d1.month<d2.month)
{
    return -1;
   }
if (d1.date>d2.date)
{
    return 1;
   }
   if (d1.date<d2.date)
{
    return -1;
   }
   if (d1.hour>d2.hour)
{
    return 1;
   }
   if (d1.hour<d2.hour)
{
    return -1;
   }
   if (d1.min>d2.min)
{
    return 1;
   }
   if (d1.min<d2.min)
{
    return -1;
   }

return 0;

}
int main(){
    ss d1={1,4,2000,8,1};
    ss d2={15,4,2000,8,15};

    int a=show(d1,d2);

    if (a==1)
    {
        printf("\n\n%d/%d/%d grater by %d:%d min\n\n",d1.date,d1.month ,d1.year,d1.hour,d1.min);
    }
    else if (a==-1)
    {
        printf("\n\n%d/%d/%d grater by %d:%d min\n\n",d2.date,d2.month ,d2.year,d2.hour,d2.min);
    }
    else if (a==0)
    {
        printf("\n\n**********both date  and time is same**********\n\n");
    }
    
    
    
    return 0;
}