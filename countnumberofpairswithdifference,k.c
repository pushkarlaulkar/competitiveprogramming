//This program counts the number of pairs with a difference k.
//Algorithm
//1. Init count to 0.
//2. Take the array and remove duplicates if any.
//3. Sort the array.
//4. For every element a[i] of the array do the following steps :- 
//	1. Binary search for a[i] + k in the subarray i + 1 to n - 1.
//	2. If a[i] + k found then increment count.
//5. Return count.
#include<stdio.h>
#include<stdlib.h>

int cmpfunc(const void *a, const void *b){
	return (*(int *)a - *(int *)b);
}

int binarysearch(int a[], int low, int high, int x){
	if(high >= low){
		int mid = low + (high - low) / 2;
		if(x == a[mid])	return mid;
		if(x > a[mid])	return binarysearch(a, mid + 1, high, x);
			else	return binarysearch(a, low, mid - 1, x);
	}
	return -1;
}

int main(){
	int n, k; scanf("%d%d", &n, &k); int a[n], i, count = 0;
	for(i = 0; i < n; scanf("%d", &a[i++]));		
	qsort(a, n, sizeof(int), cmpfunc);
	for(i = 0; i < n - 1; i++)	if(binarysearch(a, i + 1, n - 1, a[i] + k) != -1)	count++;
	printf("%d\n", count);
	return 0;
}
