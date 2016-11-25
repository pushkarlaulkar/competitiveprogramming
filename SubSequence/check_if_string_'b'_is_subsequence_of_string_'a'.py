#checks if string b is subsequence of string a
def issubsequence(b, a, lb, la):
	if(lb == 0):	return True;
	if(la == 0):	return False;
	#If last characters of two strings are matching	
	if(b[lb - 1] == a[la - 1]):	return issubsequence(b, a, lb - 1, la - 1);
	#If last characters are not matching
	return issubsequence(b, a, lb, la - 1);
