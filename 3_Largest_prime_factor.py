#The prime factors of 13195 are 5, 7, 13 and 29.
#
#What is the largest prime factor of the number 600851475143 ?
#Python 2.7.9

def prime(x):
    r = True
    for i in range(2,x-1,1):
        if x%i==0:
            r = False
    return (r)

num=600851475143//2
maxx=1
i=2
while i<num:
    if 600851475143%i==0 and prime(i)==True:
        maxx = i
    i += 1

print maxx
    

#def prime(x):
#    r = True
#    n = (x-1)//2
#    for i in range(2,n,1):
#        if x%i==0:
#            r = False
#            break
#    return (r)
#
#num=600851475143//2
#maxx=1
#i=2
#while i<num:
#    if prime(i)==True:
#        if 600851475143%i==0:
#            maxx = i
#            print maxx
#    i += 1
#
#print maxx
    