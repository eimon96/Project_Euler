/*

The following iterative sequence is defined for the set of positive integers:

n -> n/2 (n is even)
n -> 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:
13 -> 40 -> 20 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1

It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. 
Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers 
finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.

Dev-C++ 5.11
*/



#include <stdio.h>
#include <stdlib.h>



int collatz(long long n)
{
	int count = 1;
	
	while (n!=1)
	{
		if (n%2==0)
		{
			n = n/2;
		} 
		else
		{
			n = 3*n +1;
		}
		count++;
	}
	return count;
}




int main()
{
	
	long long i;
	long long maxx =  0;
	long long start_num;
	long long c;
	
	
	for(i=2; i<1000000; i++)
	{
		c = collatz(i);
		if (c > maxx)
		{
			maxx = c;
			start_num = i;
		}
	}

	
	printf("%lld , %lld \n", maxx, start_num);
	system("pause");
	return 0;
}


