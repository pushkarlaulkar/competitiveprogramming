#include<stdio.h>
int main(){
	int a[] = {1, 2, 3, 4};
	int n = 4, i, j;
	for(i = 0; i < (1 << n); ++i){
		for(j = 0; j < n; ++j)	
			if(i & (1 << j))	printf("%d ", a[j]);
		printf("\n");
	}		
	return 0;
}
