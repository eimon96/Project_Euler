#2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
#
#What is the sum of the digits of the number 2^1000?

s = 0
for i in 1..(2**1000).to_s.length+1
    s += (2**1000)%(10**i) / (10**(i-1))
end

puts s
