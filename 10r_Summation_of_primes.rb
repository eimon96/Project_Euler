#The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
#
#Find the sum of all the primes below two million.

def prime(x)
    n = Math.sqrt(x)
    i = 2
    while i <= n
        if x %i ==0
            return false
        end
        i += 1
    end
    return true
end


s = 0
for i in 1..2000000-1
    if prime(i)
        s += i
    end
end

puts s-1
