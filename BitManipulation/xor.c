//This program finds the xor of two numbers and also tells how many bits are different
#include<stdio.h>
int main(){
	int a, b, c, co = 0; scanf("%d%d", &a, &b); c = a ^ b;
	printf("%d\n", c);
	while(c)	c = c & (c - 1), co++;
	printf("%d\n", co);		
	return 0;
}
