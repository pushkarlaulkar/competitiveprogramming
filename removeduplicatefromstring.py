from collections import OrderedDict	#This line is needed if you want to print the string in the same order as it appears in the original string
s = raw_input();
print "".join(OrderedDict.fromkeys(s));
