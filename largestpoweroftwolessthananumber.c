#include<stdio.h>
#define ll long long int

ll largestpower(ll n){
	//changing all right side bits to 1.
	n = n | (n >> 1); n = n | (n >> 2);
	n = n | (n >> 4); n = n | (n >> 8);

	//as now the number is 2 * x-1, where x is required answer, so adding 1 and dividing it by 2. 
	return (n + 1) >> 1;
}

int main(){
	ll n; scanf("%lld", &n);
	printf("%lld\n", largestpower(n));	
	return 0;
}
