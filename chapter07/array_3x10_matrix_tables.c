#include<stdio.h>

int main(){
    int tables=3;
    int upto = 10;
    int arr[3][10];
    for(int i = 0;i<=10;i++){arr[0][i]=2*(i+1); }
    for(int i = 0;i<=10;i++){arr[1][i]=7*(i+1); }
    for(int i = 0;i<=10;i++){arr[2][i]=9*(i+1); }
   for (int i = 0; i < 10; i++)
   {printf("\n2x%d = %d  ||  7x%d = %d ||  9x%d = %d ",i+1,arr[0][i],i+1,arr[1][i],i+1,arr[2][i]);}
    return 0;
}