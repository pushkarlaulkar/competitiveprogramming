#include<stdio.h>

void merge(int A[], int start, int mid, int end){
	int p = start, q = mid + 1, i;

	int Arr[end - start + 1], k = 0;

	for(i = start; i <= end; i++) {
		if(p > mid)	Arr[k++] = A[q++];
			else if(q > end)	Arr[k++] = A[p++];
				else if(A[p] < A[q])	Arr[k++] = A[p++];
					else	Arr[k++] = A[q++];
	}
	for(p = 0; p < k; p++)	A[start++] = Arr[p];                          
}

void mergesort(int a[], int start, int end){
	if(start < end){
		int mid = (start + end) / 2 ;           
		mergesort(a, start, mid);           
		mergesort(a, mid + 1, end);            
		merge(a, start, mid, end);   
	}                    
}

int main(){
	int n; scanf("%d", &n); int a[n], i;
	for(i = 0; i < n; scanf("%d", &a[i++]));
	mergesort(a, 0, n);
	for(i = 0; i < n; printf("%d ", a[i++]));
	printf("\n");
	return 0;
}
