/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
Dev-C++ 5.11
*/



#include <stdio.h>
#include <stdlib.h>


// searching least common multiple of numbers 1-20



long gcd(long n1, long n2)
{
	long i; long g;
	
	for(i=1; i <= n1 && i <= n2; i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            g = i;
        }
    }
    return g;
}




int main()
{
	long long lcm = 2;
	
	int i;
	for(i=3; i<=20; i++)
	{
		lcm = lcm*i/gcd(lcm, i);
	}
	
	
	printf("%d \n", lcm);
	
	system("pause");
	return 0;
}


