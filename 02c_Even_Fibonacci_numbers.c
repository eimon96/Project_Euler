/* 
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
Dev-C++ 5.11
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n1 = 1;
	int n2 = 2;
	int temp = 0;
	int sum = 0;
	
	while (n2 < 4000000){
		if (n2%2 == 0){
			sum += n2;
		}
		    temp = n1 + n2;
    		n1 = n2;
    		n2 = temp;
    		
    		printf("%d , ",n1);
			printf("%d \n",n2);
	}


	printf("%d \n",sum);
	
	system("pause");	
	return 0;
}
