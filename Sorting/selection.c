#include<stdio.h>

void selectionsort(int a[], int n){
	int min, i, j, t;
	for(i = 0; i < n - 1; i++){
		min = i;
		for(j = i + 1; j < n; j++)	if(a[j] < a[min])	min = j;
		t = a[min], a[min] = a[i], a[i] = t;
	}
}

int main(){
	int n; scanf("%d", &n); int a[n], i;
	for(i = 0; i < n; scanf("%d", &a[i++]));
	selectionsort(a, n);
	for(i = 0; i < n; printf("%d ", a[i++]));
	printf("\n");
	return 0;
}
