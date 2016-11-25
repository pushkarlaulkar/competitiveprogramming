//Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.
//For example A[0] = -7, A[1] = 1, A[2] = 5, A[3] = 2, A[4] = -4, A[5] = 3, A[6]=0
//3 is an equilibrium index, because:
//A[0] + A[1] + A[2] = A[4] + A[5] + A[6]
//6 is also an equilibrium index, because sum of zero elements is zero, i.e., A[0] + A[1] + A[2] + A[3] + A[4] + A[5]=0

//So this program returns the equilibrium index, if there, else returns -1;
//Input to be given to this function is the array and the size of the array i.e n.
int partitionindex(int a[], int n){
	int sum = 0, leftsum = 0, i;
	for(i = 0; i < n; sum += a[i++]);
	for(i = 0; i < n; i++){
		sum -= a[i];
		if(leftsum == sum)	return i;
		leftsum += a[i];
	}
	return -1;
}
