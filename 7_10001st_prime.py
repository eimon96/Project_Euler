#By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
#
#What is the 10 001st prime number?
#Python 2.7.9


from math import sqrt

def prime(x):
    r = True
    n = sqrt(x)
    i = 2
    while i <= n:
        if x%i==0:
            r = False
            break
        i += 1
    return (r)


count = 1 #first is 2 and we start by 3
x = 3
while True:
    if prime(x):
        count += 1
    if count == 10001:
        break
    x +=2

print x
    
    
