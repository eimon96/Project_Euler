#The decimal number, 585 = 1001001001(2) (binary), is palindromic in both bases.
#
#Find the sum of all numbers, less than one million, which are palindromic in base 10 and base 2.
#
#(Please note that the palindromic number, in either base, may not include leading zeros.)
#Python 2.7.9


def palindrome(n):
    r = False
    if str(n) == str(n)[::-1]:
        r = True
    return (r)


def duo(n,y):
    if n==1 or n==0:
        y.append(n)
        return 1,y
    else:
        y.append(n%2)
        p = n//2
        return duo(p,y)

def duadikos(n):
    y = []
    duo(n,y)
    y =  ''.join([str(num) for num in y])
    y = y[::-1] 
    return y

# i could use bin() but i didnt


s = 0 
for num in range(1,1000000):
    if palindrome(num):
        if palindrome(duadikos(num)):
            s += num


print s




