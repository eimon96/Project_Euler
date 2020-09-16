#A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
#a^2 + b^2 = c^2
#
#For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
#
#There exists exactly one Pythagorean triplet for which a + b + c = 1000.
#Find the product abc.
#Python 2.7.9

from math import sqrt

for b in range(1000):
    for a in range(1,b):
        c = sqrt(a**2 + b**2)
        if c % 1 == 0: #check if c is integer and not float
            if a + b + c == 1000:
                print a, b, int(c), a*b*int(c)
                break



