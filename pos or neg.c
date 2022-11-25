#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("The number is negative");
    }
    else if(n>0)
    {
        printf("The number is positive");
    }
    else
    {
        printf("Number is 0");
    }
    return 0;
}
