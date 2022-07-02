# By listing the first six prime numbers: 
# 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
#
# What is the 10001st prime number?


def prime(x)
    n = Math.sqrt(x)
    i = 2
    while i <= n
        if x%i == 0
            return false
        end
        i += 1
    end
    return true
end


count = 1
x = 3
while true
    if prime(x)
        count += 1
    end
    if count == 10001
        break
    end
    x +=2
end

puts x
