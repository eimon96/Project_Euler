/*
A palindromic number reads the same both ways. 
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 * 99.

Find the largest palindrome made from the product of two 3-digit numbers.
Dev-C++ 5.11
*/



#include <stdio.h>
#include <stdlib.h>


int reverse(int x)
{
	int r = 0;
	while (x!=0)
	{
		int u = x % 10;
		r = u + r*10;
		x /= 10;
	}
	return r;
}



int main()
{
	int i; int j; int k;
	int maxx = 0;
	int prod1; int prod2;
	
	for(i=100; i<=999; i++)
	{
		for(j=100; j<=999; j++)
		{
			k = i*j;
			if (k==reverse(k) && k>maxx)
			{
				prod1 = i;
				prod2 = j;
				maxx = k;
			}
		}
	}
	
	printf("%d, %d, %d \n", prod1, prod2, maxx);
	
	
	system("break");
	return 0;
}



