/*

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a^2 + b^2 = c^2

For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

Dev-C++ 5.11
*/



#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int main()
{
	int a; 
	int b; 
	float c; 
	long long product;
	
	for(b=1; b<=1000; b++)
	{
		for(a=1; a<=b; a++)
		{
			c = sqrt(a*a + b*b);
			
			if (a + b + c == 1000)
			{
				product = a*b*c;
				printf("%d \n", product);
				
				break;
			}
		}
	}
	
	
	system("pause");
	return 0;
}


