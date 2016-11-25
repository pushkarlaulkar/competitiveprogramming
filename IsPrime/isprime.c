//'n' is the number to be checked if it is prime or not.
int isprime(int n){
	int i;
	for(i = 2; i * i <= n; i++)	if(!(n % i))	return 0;
	return 1;
}
