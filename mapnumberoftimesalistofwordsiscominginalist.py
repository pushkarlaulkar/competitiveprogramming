#This program counts the number of times a list of words is coming in a list in decreasing order.
#For e.g. Input :- [Mohit Karan Mohit Mohit Ajay Karan]
	  #Output :- Mohit 3
#		     Karan 2
#		     Ajay 1

#t = input() is a number
from operator import itemgetter
from collections import Counter
t = input(); l = raw_input().split();
c = Counter(l);
c = sorted(c.items(), key = itemgetter(1), reverse = True)
for i, j in c:
	print i, j;
