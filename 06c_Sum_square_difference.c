/*
Find the difference between the sum of the squares of the first one hundred natural numbers 
and the square of the sum.

Dev-C++ 5.11
*/



#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i;
	long sum1 = 0;
	long sum2 = 0;
	
	for(i=1; i<=100; i++)
	{
		sum1 += i;
		sum2 += i*i;
	}
	sum1 *= sum1;
	
	
	long s = sum1 - sum2;
	
	printf("%d \n", s);
	
	system("pause");
	return 0;
}

