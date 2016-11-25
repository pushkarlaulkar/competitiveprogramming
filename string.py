#This program counts the occurence of all the digits from 0-9 in the given string. I have added +48 so that it gets converted to appropriate ascii
s = raw_input();
for i in range(0, 10):
	c = chr(i + 48); print c, s.count(c);
