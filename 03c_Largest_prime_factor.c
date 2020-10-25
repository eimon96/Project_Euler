/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
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
			i++;			
		}
	}
	 
	return (flag);
}



int main()
{
	
//	bool test = prime(2020);
//	printf("%s \n", test ? "true" : "false");
	
	long long num = 600851475143;
	long long riza_num = sqrt(num);
	long long maxx;
	long long i = 1;
	
	
	while (i<=riza_num)
	{
		if (num%i==0)
		{
			if (prime(i))
			{
				maxx = i;
			}
		}
		i+=2;
	}
	
	
	
	printf("%lld \n",maxx);
	
	system("pause");
	return 0;
}

