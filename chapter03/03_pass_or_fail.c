#include<stdio.h>

int main(){
    int physics,maths,chemistry;
    float total;
    printf("what is your physics's marks : \n");
    scanf("%d", &physics);

    printf("what is your maths's marks : \n");
    scanf("%d", &maths);

    printf("what is your chemistry's marks : \n");
    scanf("%d", &chemistry);
     
     total = ((physics+maths+chemistry)/3);
    if ((total<40) || physics<33 || maths<33 || chemistry<33)
    {
        printf("You are FAIL\n", total,physics,maths,chemistry);
    }
    else
    {
        printf("Congratulations you are PASS  you got %f persentage \n",total,physics,maths,chemistry);
    }
    return 0;
}