#The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
#
#Find the sum of all the primes below two million.
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


s = 0
for i in range(2000000):
    if prime(i):
        s += i


print s-1 #exclude number 1
