#include<stdio.h>
#include<string.h>
#include<conio.h>


void take(char code[50],char name02[20],char name01[20],int amaount){
int alla,alla2;
char take[10]="take";
char send[10]="send";
char by[5]="by";
FILE *ptr,*pkt;
ptr = fopen(code,"a");


fprintf(ptr,"%s %s %s\t%s %s %s\t%d",take,by,name02,send,by,name01,amaount);

pkt = fopen(name01,"r");
fscanf(pkt,"%d",&alla);
pkt = fopen(name01,"w");
alla=alla-amaount;
fprintf(pkt,"%d",alla);
pkt = fopen(name02,"r");
fscanf(pkt,"%d",&alla2);
pkt = fopen(name02,"w");
alla2=alla2+amaount;
fprintf(pkt,"%d",alla2);

printf("succesfully transferd \n\nyour bank ballance is %d/.rs and his/her remaining bank balance is %d/.rs ",alla2,alla);

fclose(ptr);
fclose(pkt);

}



void send(char code[50],char name02[20],char name01[20],int amaount){
char take[10]="take";
char send[10]="send";
char by[5]="by";
int alla,alla2;
FILE *ptr,*pkt;
ptr = fopen(code,"a");

fprintf(ptr,"%s %s %s\t%s %s %s\t%d",send,by,name02,take,by,name01,amaount);


pkt = fopen(name02,"r");
fscanf(pkt,"%d",&alla);
pkt = fopen(name02,"w");
alla=alla-amaount;
fprintf(pkt,"%d",alla);
pkt = fopen(name01,"r");
fscanf(pkt,"%d",&alla2);
pkt = fopen(name01,"w");
alla2=alla2+amaount;
fprintf(pkt,"%d",alla2);


printf("succesfully transferd \n\nyour  remaining bank ballance is %d/.rs and his/her bank balance is %d/.rs ",alla,alla2);
fclose(ptr);
fclose(pkt);


}
void mainn(){
    printf("\n\t\t         ****************************************\n");
    printf("\t\t     **************************************************\n");
    printf("\t\t  *******************::::::::::::::::::::******************\n");
    printf("\t\t*********************THIS IS AMARTYA MAHATO*******************\n");
    printf("\t\t*********************::::::::::::::::::::*******************\n");
    printf("\t\t   *******************INTERNATIONAL BANK*****************\n");
    printf("\t\t       ***************:::::::::::::::::::*************\n");
    printf("\t\t          ****************************************\n");
    char a[10];
    }
int data(){
int dd;
FILE *ppkj;
ppkj = fopen("data.txt","r");
fscanf(ppkj,"%d",&dd);
dd = dd+1;
ppkj = fopen("data.txt","w");
fprintf(ppkj,"\t%d",dd);
return dd;


}
void deposite(char doname[50]){int ssa,cs,as;
char ads;

   do{ printf("\n\n(1)->deposite\n\n(2)->credit\n\n=====>>>> ");
scanf("%d",&ssa);
         if (ssa==1)
         {
            FILE *ppy;
          ppy = fopen(doname,"r");
            fscanf(ppy,"%d",&cs);
printf("\nEnter the ammount : ");
scanf("%d",&as);

          ppy = fopen(doname,"w");
           cs=cs-as;
              fprintf(ppy,"%d",cs);
printf("\nyour remaining amount is %d ",cs);
fclose(ppy);



      

         }

         
  else if (ssa==2)
         {
            FILE *ppy;
          ppy = fopen(doname,"r");
            fscanf(ppy,"%d",&cs);
printf("\nEnter the ammount : ");
scanf("%d",&as);

          ppy = fopen(doname,"w");
           cs=cs+as;
              fprintf(ppy,"%d",cs);

printf("\nyour total amount is %d ",cs);
fclose(ppy);

      

         }
         else{
printf("\nEnter the given numbers : ");
printf("\nDo you want to reapet (y/n) : ");
         fflush(stdin);
scanf("%c",&ads);


         }
         
         }while(ads =='y');

}

typedef struct emplpyee{
    int a;
    char n[30];
    int s;
    char adr[100];
    
} em;
int main(){
mainn();
    int b,p;

   printf("\n\n***Press any one***\n\n(1)->Signup\t\t(2)->Details/Search\t\t(3)->Deposite/Credit\n\n(4)->transaction\n\n======>>> ");
    scanf("%d",&b);
          em e[50];
    if(b==1){
         char  v[30]; 
         char  add[100]; 
      FILE *ptr,*ptk;
      
      ptr = fopen("employee.txt","a");
      if(ptr==NULL){

    printf("File dose not exists \n\n");
      }
      else{
          char c;
              int i=0,ry,li;
          do{
 

    printf("\nEnter your name : ");
    scanf("%s",v);
      strcpy(e[i].n,v);
    printf("\nEnter your annual salary : ");
    scanf("%d",&e[i].s);
    printf("\nEnter how much money you want to deposite : ");
    scanf("%d",&ry);
      

ptk = fopen(v,"w");

fprintf(ptk,"%d",ry);
    printf("\nEnter your age : ");
    scanf("%d",&e[i].a);
    printf("\nEnter your address : ");
    scanf("%s",&add);
      strcpy(e[i].adr,add);

     int js=data();
    printf("\n\nyour code is (((%d)))",js);


       
    printf("\n\nDo you want to add more account (Y/N) : ");
        
     fflush(stdin);
    scanf("%c",&c);
     
    
     fprintf(ptr,"%s\t%d\t%d\t%s\n",e[i].n,e[i].a,e[i].s,e[i].adr);
    
        i++;
       
          }while(c == 'y');
    printf("\n\nAccount is successfuly  created ");
fclose(ptk);
          fclose(ptr);
          main();
     
     
      }


    }
    else if (b==2){
        int j=0,k=0;int ahhk;
       char fdh[50];
      FILE *ptr,*ptk;
       ptr = fopen("employee.txt","r");
       printf("Enter your name : ");
       scanf("%s",&fdh);
       printf("Enter your code : ");
       scanf("%d",&p);
       ptk = fopen(fdh,"r");
       fscanf(ptk,"%d",&ahhk);
    p=p-1;
  char w[30];
  char addr[100];
     int q ;
     int r ;
      while (j<=p){
     fscanf(ptr,"%s\t%d\t%d\t%s\n",&e[k].n,&e[k].a,&e[k].s,&e[k].adr);
    
      strcpy(w,e[k].n);
      strcpy(addr,e[k].adr);
      q = e[k].a;
      r = e[k].s;

    j++;
     k++;
 }
     fclose(ptr);
      printf("*************************************\n");
      printf("your name is %s\n",w);
      printf("your age is %d\n",q);
      printf("your salary is %d\n",r);
      printf("your address is %s\n",addr);
      printf("your bank ballance is %d /.rs\n",ahhk);
main();
    }
    else if (b==3)
    {char name[50];
      
      
         printf("Enter your name :");
      scanf("%s",name);
        deposite(name);
      }
  
         else if(b==4){char name02[20],name01[20],sls[50];int sa,g=0,amaount,bb,kl=0;
        do { printf("(1)->SEND\t\t(2)->TAKE\t\t(3)->HISTORY \n\n======>>>>>");
         scanf("%d",&bb);
         if(bb==3){char addsd[50];
             char names[20];
             char take[10];
             char send[10];
             char by[5];
             char wile[100000],*wh=wile; 
         printf("Enter your name :");
      scanf("%s",names);
         printf("Enter your address :");
      scanf("%s",addsd);

           FILE *ptr;
           ptr = fopen(addsd,"r");
           do
           {
              *wh = fscanf(ptr,"%s %s %s\t%s %s %s\t%d",&take,&by,&name02,&send,&by,&name01,&amaount);
             
         printf("\n\n%s %s %s %s %s %s of %d\n\n",take,by,name02,send,by,name01,amaount);
           } while (*wh!=EOF);
      }

         else if (bb==1){

        printf("Enter sender's name : ");
      scanf("%s",name02);
         printf("Enter receiver's  name : ");
      scanf("%s",name01);
         FILE *ptr;
         ptr = fopen(name02,"r");
         fscanf(ptr,"%d",&sa);

         printf("Enter the amount : ");
      scanf("%d",&amaount);

      if(amaount<sa){

         printf("Enter your address :");

      scanf("%s",sls);
      send(sls,name02,name01,amaount);
         kl=kl+1;
      }
      else if(amaount==sa) {

         printf("You can't send all amount that you have  (SORRY)\n");
     g=0;
      }
      else if(amaount>sa){
         printf("\nBank ballance is low. \nYou have %d ballance\n",sa);
         g=0;
         }
         fclose(ptr);
         
         }
         else if(bb==2){
             
         printf("Enter receiver's name : ");
      scanf("%s",name02);
         printf("Enter sender's name : ");
      scanf("%s",name01);
              FILE *ptr;
         ptr = fopen(name01,"r");
         fscanf(ptr,"%d",&sa);

         printf("Enter the amount : ");
      scanf("%d",&amaount);

      if(amaount<sa){

         printf("Enter your address :");

      scanf("%s",sls);

      take(sls,name02,name01,amaount);
         kl=kl+1;
      }
      else if(amaount==sa) {

         printf("You can't take all amount that He/she have  (SORRY)\n");
     g=0;
      }
      else if(amaount>sa){
         printf("\nBank ballance is low. \nHe/she has %d ballance\n",sa);
         g=0;
         }
         fclose(ptr);
         
             
         }
         else{
             printf("enter the given numbers(1/2/3)");
         }
         
         }while(kl==0);

         
 
  
     





         }
    else{

    printf("Please press the given numbers \n\n");
    }
    
getch();
    return 0;
}
    
    
