# The decimal number, 585 = 1001001001(2) (binary), 
# is palindromic in both bases.
#
# Find the sum of all numbers, less than one million, 
# which are palindromic in base 10 and base 2.
#
# Please note that the palindromic number, in either base, 
# may not include leading zeros.


def palindrome(n)
    if n.to_s == n.to_s.reverse
        return true
    end
    return false
end

s = 0 
for num in 1..999_999
    if palindrome(num)
        if palindrome(num.to_s(2).to_i)
            s += num
        end
    end
end

puts s
