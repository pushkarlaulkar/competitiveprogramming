#include<stdio.h>
#define max(a, b) (((a) >= (b)) ? (a) : (b))

void countsort(int a[], int n, int place){
	int range = 10, i, freq[10] = {0};
	int output[n];
	for(i = 0; i < n; i++)	freq[(a[i] / place) % range]++;
	for(i = 1; i < range; i++)	freq[i] += freq[i - 1];
	for(i = n - 1; i >= 0; i--){
		output[freq[(a[i] / place) % range] - 1] = a[i];
		freq[(a[i] / place % range)]--;
	}
	for(i = 0; i < n; i++)	a[i] = output[i];
}

void radixsort(int a[], int n, int max){
	//max is the maximum element in the array
	int mul = 1;
	while(max){
		countsort(a, n, mul);
		mul *= 10, max /= 10;
	}
}

int main(){
	int n; scanf("%d", &n); int a[n], i, m;
	for(i = 0; i < n; scanf("%d", &a[i++]));
	m = a[0];
	for(i = 1; i < n; i++)	m = max(m, a[i]);
	radixsort(a, n, m);
	for(i = 0; i < n; printf("%d ", a[i++]));
	printf("\n");
	return 0;
}
