from collections import Counter
t = input();
while(t > 0):
	s = raw_input(); c = Counter(s); s = sorted(s);
	print "".join(sorted(s, key = lambda t : c[t]));
	t -= 1;
