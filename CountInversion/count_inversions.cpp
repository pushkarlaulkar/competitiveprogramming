#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int getinvcount(int a[], int n){
	set<int> set1; set1.insert(a[0]);
	int invcount = 0, i;
	set<int>::iterator itset1;
	for(i = 1; i < n; i++){
		set1.insert(a[i]);
		itset1 = set1.upper_bound(a[i]);
		invcount += distance(itset1, set1.end());
	}
	return invcount;
}

int main(){
	int n, i, j; scanf("%d", &n); int a[n], c = 0;
	for(i = 0; i < n; scanf("%d", &a[i++]));
	printf("%d\n", getinvcount(a, n));
	return 0;
}
