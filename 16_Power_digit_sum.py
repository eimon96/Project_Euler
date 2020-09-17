#2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
#
#What is the sum of the digits of the number 2^1000?
#Python 2.7.9


s = 0
for i in range(1, len(str(2**1000))+1 ):
    s += (2**1000)%(10**i) / (10**(i-1))

print s
