//This function gives power of a number raised to n. Since this may result into overflow we are using mod = 1000000007
ll power(ll x, ll n){
	ll result = 1;
	while(n > 0){
		if(n % 2)	result = (result * x) % mod;
		x = (x * x) % mod, n >>= 1;
	}
	return result;
}
