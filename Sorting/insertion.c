#include<stdio.h>

void insertionsort(int a[], int n){
	int i, j, t;
	for(i = 0; i < n; i++){
		t = a[i], j = i;
		while(t < a[j - 1] && j > 0)	a[j] = a[j - 1], j--;
		a[j] = t;
	}
}

int main(){
	int n; scanf("%d", &n); int a[n], i;
	for(i = 0; i < n; scanf("%d", &a[i++]));
	insertionsort(a, n);
	for(i = 0; i < n; printf("%d ", a[i++]));
	printf("\n");
	return 0;
}
