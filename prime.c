#include <stdio.h>
int main()
{
	int num, i;
	printf("Enter Number : ");
	scanf("%d", &num);
	if (num > 1)
	{
		for (i = 2; i <= num / 2; i++)
		{
			if (num % i == 0)
			{
				printf("%d is not a prime number", num);
				break;
			}
		}
		if (i == num / 2 + 1)
		{
			printf("%d is a prime number", num);
		}
	}
	else
	{
		printf("%d is not a prime number", num);
	}
	return 0;
}
