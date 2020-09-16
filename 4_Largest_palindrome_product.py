# -*- coding: utf-8 -*-
#A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
#
#Find the largest palindrome made from the product of two 3-digit numbers.
#Python 2.7.9


maxx = 1

for i in range(100,999):
    for j in range(100,999):
        k = i*j
        if str(k) == str(k)[::-1] and k > maxx:
            maxx = k
            product_one = i
            product_two = j

print product_one, product_two, maxx
