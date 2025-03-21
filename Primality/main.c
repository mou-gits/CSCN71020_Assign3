#include <stdio.h>
#include "main.h"
#include <math.h>

void main(void)
{
	printf("Result is %s", isPrime(11));
}

const char* isPrime(int Number)
{
	if (Number == 0 || Number == 1)
	{
		return "Not Prime";
	}
	
	for (int i = 2; i <= sqrt (Number); i++)
	{
		if (Number % i == 0)
		{
			return "Not Prime";
		}
	}
	return "Prime";
}
	