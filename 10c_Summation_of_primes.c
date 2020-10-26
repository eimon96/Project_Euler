/*

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.

Dev-C++ 5.11
*/



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>



bool prime(long long x)
{	
	bool flag = true;
	long long n = sqrt(x);
	int i=3;
	
	if (x%2==0)
	{
		flag = false;
	}
	else
	{
		
		while (i<=n)
		{
			if (x%i==0)
			{
				flag = false;
				break;
			}
			i+=2;			
		}
	}
	 
	return (flag);
}




int main()
{
	long long sum = 2;
	
	
	int n;
	for(n=3; n<=2000000; n++)
	{
		if (prime(n))
		{
			sum += n;
		}
	}
	
	
	printf("%lld \n", sum);
	
	system("pause");
	return 0;
}


