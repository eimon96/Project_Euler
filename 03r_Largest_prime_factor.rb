#The prime factors of 13195 are 5, 7, 13 and 29.
#
#What is the largest prime factor of the number 600851475143 ?

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


num = Math.sqrt(600851475143)
maxx = 0
i = 1
while i < num
    if 600851475143%i == 0
        if prime(i)
            maxx = i
        end
    end
    i += 2
end

puts maxx
