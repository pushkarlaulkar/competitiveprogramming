//'a' is the array and 'x' is the number to be searched. For binary search make sure that you have sorted the array in increasing order.
int binarysearch(int a[], int low, int high, int x){
	if(high >= low){
		int mid = low + (high - low) / 2;
		if(x == a[mid])	return mid;
		if(x > a[mid])	return binarysearch(a, mid + 1, high, x);
			else	return binarysearch(a, low, mid - 1, x);
	}
	return -1;
}
