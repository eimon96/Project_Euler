#n! means n × (n − 1) × ... × 3 × 2 × 1
#
#For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
#and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.
#
#Find the sum of the digits in the number 100!
#Python 2.7.9




from math import factorial as fact

s = 0
for i in range(1, len(str(fact(100)))+1 ):
    s += (fact(100))%(10**i) / (10**(i-1))

print s

    

