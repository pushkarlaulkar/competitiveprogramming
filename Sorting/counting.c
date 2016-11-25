#include<stdio.h>
#define max(a, b) (((a) >= (b)) ? (a) : (b))

void countingsort(int a[], int aux[], int sorted[], int n, int m){
	int t, j = 0, i;
	for(i = 0; i <= m; i++){
		t = aux[i];
		while(t--)	sorted[j++] = i;
	}
}

int main(){
	int n; scanf("%d", &n); int a[n], i, m, sorted[n];
	for(i = 0; i < n; scanf("%d", &a[i++]));
	m = a[0];
	for(i = 1; i < n; i++)	m = max(m, a[i]);
	int aux[m + 1];
	for(i = 0; i <= m; aux[i++] = 0);
	for(i = 0; i < n; i++)	aux[a[i]]++;
	countingsort(a, aux, sorted, n, m);
	for(i = 0; i < n; printf("%d ", sorted[i++]));
	printf("\n");
	return 0;
}
