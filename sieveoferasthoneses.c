#include<stdio.h>
int main(){
	int a[1000001], i, j;
	for(i = 2; i <= 1000000; i++)	a[i] = i;
	for(i = 2; i * i <= 1000000; i++)	for(j = i * 2; j <= 1000000; j += i)	a[j] = 0;
	for(i = 2; i <= 10; printf("%d ", a[i++]));
	return 0;
}
