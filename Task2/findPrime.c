#include<stdio.h>

int main()
{
	int n, reg;
	for (n=1; n<=10; n++)
	{
		reg = 0;
		for(int i = 1; i<=n; i++)
		{
			if(n%i == 0)
				reg++;
		}
		if (reg <= 2)
			printf("Given number %d is Prime \n",n);
		else
			printf("Given number %d is notPrime \n",n);
	}
	return 0;
}
