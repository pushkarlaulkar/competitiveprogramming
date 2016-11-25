//This program prints all the prime factors of a number
#include<stdio.h>
int main(){
	long long int n, i; scanf("%lld", &n);
	while(n % 2 == 0)	printf("2 "), n /= 2;	// Print the number of 2s that divide n
	// n must be odd at this point.  So we can skip one element (Note i = i +2)
	for(i = 3; i * i <= n; i += 2)	while(n % i == 0)	printf("%lld ", i), n /= i;
	// This condition is to handle the case whien n is a prime number greater than 2
	if(n > 2)	printf("%lld ", n);
	return 0;
}
