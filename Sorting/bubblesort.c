#include<stdio.h>

void bubblesort(int a[], int n){
	int i, t, j;
	for(i = 0; i < n - 1; i++){
		for(j = 0; j < n - i - 1; j++){
			if(a[j] > a[j + 1])	t = a[j], a[j] = a[j + 1], a[j + 1] = t;	
		}
	}
}

int main(){
	int n; scanf("%d", &n); int a[n], i;
	for(i = 0; i < n; scanf("%d", &a[i++]));
	bubblesort(a, n);
	for(i = 0; i < n; printf("%d ", a[i++]));
	printf("\n");
	return 0;
}
