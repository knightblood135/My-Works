#include<stdio.h>

int main(){
    int students=6;
     int subjects=5;
     int marks[6][5];
     for (int i = 0; i < students; i++)
     { for (int j = 0; j < subjects ; j++)
     { printf("\nenter the marks of student %d in subject %d : ",i+1,j+1);
     scanf("%d",&marks[i][j]);
     }
        printf("\n\n\n***********************************\n\n\n");
     }
for (int i = 0; i < students; i++)
     { for (int j = 0; j < subjects ; j++)
     { printf(" the marks of student %d in subject %d is %d\n\n",i+1,j+1,marks[i][j]);
    
     }
     printf("\n\n\n***********************************\n\n\n");
     }

    return 0;
}