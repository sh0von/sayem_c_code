#include<stdio.h>
int main()
{
    int num,sum_v=0,i;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum_v=sum_v+i;
        }
    }
    if(sum_v==num)
    {
        printf("The entered number is a perfect number");
    }
    else
    {
        printf("The entered number is not a perfect number");
    }
    return 0;
}
