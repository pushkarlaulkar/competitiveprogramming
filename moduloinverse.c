//This program finds a inverse of a number modulo 1000000007
//https://www.hackerearth.com/practice/math-1/number-theory-1/multiplicative-inverse-1/tutorial/
//This link has tutorial on this. This program implements the same.

#include <stdio.h>
#define ll long long int
ll power(ll a, ll b){
	if(b == 0)	return 1;
	else if(b % 2 == 0)	return power((a * a) % 1000000007, b / 2);
	else return (a * (power((a * a) % 1000000007, (b - 1) / 2))) % 1000000007;
}
int main(){
	ll a; scanf("%lld", &a);
	printf("%lld\n", power(a, 1000000005) % 1000000007));
	return 0;
}
