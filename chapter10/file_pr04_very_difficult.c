#include<stdio.h>
#include<string.h>
#include<conio.h>

typedef struct emplpyee{
    int a;
    char n[30];
    int s;
} em;
int main(){
    int b;

    printf("***Press any one***\n\n(1)->Register\n\n(2)->Details/Search\n\n :::::::: ");
    scanf("%d",&b);
          em e[50];
    if(b==1){
         char  v[30]; 
      FILE *ptr;
      
      ptr = fopen("employee.txt","w");
      if(ptr==NULL){

    printf("File dose not exists \n\n");
      }
      else{
          int c;
              int i=0;
          do{
 

    printf("Enter your name \n");
    scanf("%s",v);
      strcpy(e[i].n,v);
    printf("Enter your salary \n");
    scanf("%d",&e[i].s);

    printf("Enter your age \n");
    scanf("%d",&e[i].a);
    printf("your code is %d\n",i);

    printf("Do you want to add more employee press (1)\n");
    scanf("%d",&c);
     fprintf(ptr,"%s\t%d\t%d\n",e[i].n,e[i].a,e[i].s);
    
        i++;
          }while( c==1);
          fclose(ptr);
     
     
      }


    }
    else if (b==2){
        int p,j=0,k=0;

      FILE *ptr;
       ptr = fopen("employee.txt","r");
       printf("Enter your code : ");
       scanf("%d",&p);
  char w[30];
     int q ;
     int r ;
      while (j<=p){
     fscanf(ptr,"%s\t%d\t%d\n",&e[k].n,&e[k].a,&e[k].s);
    
      strcpy(w,e[k].n);
      q = e[k].a;
      r = e[k].s;
    j++;
     k++;
 }
     fclose(ptr);
      printf("your name is %s\n",w);
      printf("your age is %d\n",q);
      printf("your salary is %d\n",r);
      printf("*************************************\n");
    }
    else{

    printf("Please press the given numbers \n\n");
    }
    
    return 0;
}