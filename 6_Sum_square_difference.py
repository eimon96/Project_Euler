# Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
#Python 2.7.9


s1 = 0
for i in range(101):
    s1 += i
s1 = s1**2

s2 = 0
for i in range(101):
    s2 += i**2

print s1-s2
    
