#2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
#
#What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
#Python 3.8.2


from math import gcd

lcm = int(2)
for i in range(3,21,1):
      lcm = lcm*i//gcd(lcm, i)

print (lcm)
