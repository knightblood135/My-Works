#include<stdio.h>
void counter(int arr[],int n){
   

   for (int i = 0; i < 8; i++)
   {
       if (arr[i]>n)
       {
          arr[i];
   printf("the positive value in given array is %d\n",arr[i]);
       }
       
   }
  
   for (int i = 0; i < 8; i++)
   {
      if (arr[i]<n)
      {
          arr[i];
   printf("the negative value in given array is %d\n",arr[i]);
      }
      
   }
   

}
int main(){int a=0;
    int arr[]={1,2,-5,-4,9,4,3,-1};

    counter(arr,a);
    return 0;
}