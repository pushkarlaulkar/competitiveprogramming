//l is length of string
int ispalin(char a[], int l){
	int i = 0, j = l - 1;
	while(i <= j){
		if(a[i] != a[j])	return 0;
		i++, j--;
	}
	return 1;
}
