#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int game (int com,int ch){


    if (com==ch)
    {
        return 0;
    }
    else if(com==1 && ch==2){
        return 1;
    }
    else if(com==2 && ch==1){
        return -1;
    }
    else if(com==2 && ch==3){
        return 1;
    }
    
    else if(com==3 && ch==2){
        return -1;
    }
    
    else if(com==3 && ch==1){
        return 1;
    }
    else if(com==1 && ch==3){
        return -1;
    }
    
}
int main(){
    int num,ch,com,result;
    srand(time (0));
    num = rand()%3 + 1;
    printf("\n\nCHOSE ANY ONE\n\n(1)===>>stone\t\t(2)===>>paper\t\t(3)===>>scissor\n\n=====>>>> ");
    scanf("%d",&ch);
     com = num ;
   result=  game(com,ch);
   if (result==0)
   {
      printf("\n\nmathc is draw computer chose %d",com);
   }
   if (result==-1)
   {
      printf("\n\nyou lose the match computer chose %d ",com);
   }
   if (result==1)
   {
      printf("\n\nyou win the match computer chose %d",com);
   }
   

    return 0;
}