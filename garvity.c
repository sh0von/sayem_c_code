#include<stdio.h>
int main()
{
    float eg=9.8;
    float mg=9.8*17/100;
    int m;
    printf("Enter your mass: ");
    scanf("%d",&m);
    printf("Weight on moon is %f",mg*m);
    return 0;
}
