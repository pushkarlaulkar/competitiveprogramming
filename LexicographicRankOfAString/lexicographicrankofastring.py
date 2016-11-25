def fact (n):
        if(n <= 1):	return 1;
        else:	return n * fact(n - 1);

def findRank(A):
	res = 1;
	for i in range(0, len(A) - 1) :
		rank = 0;
		for j in range(i + 1, len(A)) :
		    if(A[i] > A[j]):	rank += 1;
		res = (res + rank * fact(len(A) - i - 1 )) % 1000003;
	return res;
  
s = raw_input();
print findRank(s);
