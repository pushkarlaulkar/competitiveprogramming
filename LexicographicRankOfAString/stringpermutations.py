#This program prints all the permutations of a string without duplicates in chronological order.
from itertools import permutations
s = raw_input().strip();
perms = [''.join(p) for p in permutations(s)]
for temp in sorted(set(perms)):
    print temp
