#A palindromic number reads the same both ways. 
#The largest palindrome made from the product of two 2-digit 
#numbers is 9009 = 91 × 99.
#
#Find the largest palindrome made from the product of two 3-digit 
#numbers.

maxx = 1

for i in 100..999
    for j in 100..999
        k = i*j
        if (k.to_s == k.to_s.reverse and k > maxx)
            maxx = k
            product_one = i
            product_two = j
        end
    end
end

print product_one, " ",  product_two, " ",  maxx, "\n"
