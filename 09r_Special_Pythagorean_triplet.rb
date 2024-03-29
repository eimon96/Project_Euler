# A Pythagorean triplet is a set of three natural numbers, 
# a < b < c, for which, a^2 + b^2 = c^2
#
# For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
#
# There exists exactly one Pythagorean triplet for which 
# a + b + c = 1000. Find the product abc.

for b in 1..999
    for a in (1..b)
        c = Math.sqrt(a**2 + b**2)
        if c % 1 == 0
            if a + b + c == 1000
                print a, " ", b, " ", c.to_i, " ", a*b*c.to_i, "\n"
                break
            end
        end
    end
end
