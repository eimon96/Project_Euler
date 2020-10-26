/*

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, 
we can see that the 6th prime is 13. What is the 10001st prime number?

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
	
	int count = 1;
	long long n = 3;
	
	while(true)
	{
		if(prime(n))
		{
			++count;
		}
		if(count==10001)
		{
			break;
		}
		n++; n++;
	}



	printf("%d \n", n);
	
	system("pause");
	return 0;
}





