# Find the difference between the sum of the squares of the first 
# one hundred natural numbers and the square of the sum.

s1 = 0
for i in 1..101
    s1 += i
end
s1 = s1**2

s2 = 0
for i in 1..101
    s2 += i**2
end

puts s1-s2
