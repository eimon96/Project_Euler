#The prime factors of 13195 are 5, 7, 13 and 29.
#
#What is the largest prime factor of the number 600851475143 ?
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


num = sqrt(600851475143)
maxx = 0
i = 1
while i<num:
    if 600851475143%i==0:
        if prime(i):
            maxx = i
    i += 2

print maxx
    
    
