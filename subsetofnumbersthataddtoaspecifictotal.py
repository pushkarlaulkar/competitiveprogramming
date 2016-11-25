#'n' is the input for the size of the array, 'a' is the array, 's' is the sum for which we have to check if there exists any subset in the array 'a'.

def f(l, s):
	if s == 0: return True
	if l == []: return False
	return f(l[1:], s) or f(l[1:], s - l[0])

t = input();
while(t > 0):
	n = input();
	a = [int(i) for i in raw_input().split()]; s = input();
	if(f(a, s) == True):	print "YES";
	else:	print "NO";
	t -= 1;
