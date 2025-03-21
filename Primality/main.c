#include <stdio.h>
#include "main.h"

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
	
	for (int i = 2; i < Number; i++)
	{
		if (Number % i == 0)
		{
			return "Not Prime";
		}
	}
	return "Prime";
}
	