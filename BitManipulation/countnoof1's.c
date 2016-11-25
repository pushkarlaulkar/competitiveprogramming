//This program counts the number of 1's in the binary representation of that number.
#include<stdio.h>
int main(){
	int n, c = 0; scanf("%d", &n);
	while(n)	n = n & (n - 1), printf("%d\n", n), c++;
	printf("%d\n", c);
	return 0;
}
