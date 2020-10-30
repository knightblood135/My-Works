#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
struct employee{
    int a,b;
     
};
int main(){ int k;

srand(time(0));


    struct employee facebook[100];
    for(int i =0; i<100;i++)
    {
         k=rand()%9000000 + 1;
        facebook[i].a=k;
        facebook[i].b=k+283476;

    }
   for(int i=0;i<100;i++)
   { printf("\ncode is %d whose salary is %d\n",facebook[i].b,facebook[i].a);}
     
    
    return 0;
}