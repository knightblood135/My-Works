#include<stdio.h>
void swap(int arr[],int n){
     int temp;
     for(int i=0;i<(n/2);i++){
         
         temp=arr[i];
         arr[i]=arr[n-i-1];
         arr[n-i-1]=temp;}

     for(int i=0;i<(n);i++){
 
     
     printf("swap value of %d is : %d\n",i+1,arr[i]);}
     
     }

int main(){
    int arr[] ={1,2,3,4,5,6,7};
swap(arr,7);
    return 0;
}