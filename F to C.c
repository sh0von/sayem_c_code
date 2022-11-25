#include<stdio.h>
int main()
{
    float f;
    float c;
    printf("Farenheit : ");
    scanf("%f",&f);
    c=5.0/9.0*(f-32);
    printf("Celcius : %f",c);
    return 0;
}