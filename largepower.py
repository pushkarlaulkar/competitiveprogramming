mod = 1000000007;
#Method 1 :- For relatively small values. 
def power(x, y):
	result = 1;
	while(y > 0):
		if(y % 2 != 0):	result = (result * x) % mod;
		x = (x * x) % mod;
		y >>= 1;
	return result;
	
#Method 2 :- For extremely large value of the order like 10 raise to 100000.
print pow(x, y, mod);
#This takes the base x, power y and calculates result mod value.
