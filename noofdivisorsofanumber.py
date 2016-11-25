def noofdivisors(n):
	c, i = 0, 1;
	while(i * i <= n):
		if(n % i == 0):
			if(i * i == n):	c += 1;
			else:	c += 2;
		i += 1;
	return c;
