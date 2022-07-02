# n! means n × (n − 1) × ... × 3 × 2 × 1
#
# For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
# and the sum of the digits in the number 
# 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.
#
# Find the sum of the digits in the number 100!

def fact(n)
    n = n.to_i
    if n == 0
        return 1
    elsif n > 0
        n *= fact(n-1)
    else    # n negative
        return 0
    end
    
    return n 
end

puts fact(100).digits.sum
