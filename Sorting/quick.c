#include<stdio.h>

int partition(int a[], int start, int end){
	int i = start + 1, pivot = a[start], j, t;
	for(j = start + 1; j <= end; j++){
		if(a[j] < pivot)	t = a[j], a[j] = a[i], a[i] = t, i++;
	}
	t = a[start], a[start] = a[i - 1], a[i - 1] = t;
	return i - 1;
}

void quicksort(int a[], int start, int end){
	if(start < end){
		int pivotpos = partition(a, start, end);
		quicksort(a, start, pivotpos - 1);
		quicksort(a, pivotpos + 1, end);
	}
}

int main(){
	int n; scanf("%d", &n); int a[n], i;
	for(i = 0; i < n; scanf("%d", &a[i++]));
	quicksort(a, 0, n);
	for(i = 0; i < n; printf("%d ", a[i++]));
	printf("\n");
	return 0;
}
