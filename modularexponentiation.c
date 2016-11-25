//This program actually calculates x raised to y % mod
unsigned ll modularexponentiation(unsigned ll x, unsigned ll y, unsigned ll mod){
	unsigned result = 1;
	x %= mod;
	while(y > 0){
		//If y is odd, multily x with result
		if(y & 1)	result = (result * x) % mod;
		
		//y must be even now
		y >>= 1;
		x = (x * x) % mod;
	}
	return result;
}
