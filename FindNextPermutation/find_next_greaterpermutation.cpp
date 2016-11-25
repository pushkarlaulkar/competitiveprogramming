#include<algorithm>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//'t' is number of testcases.
int main(){
	int t; scanf("%d", &t); string s;
	while(t--){
		cin >> s;
		if(next_permutation(s.begin(), s.end()))	cout << s << endl; //This checks if their is a next greater 											   permutation
			else	cout << "no answer" << endl;			   //else prints "no answer";
	}
	return 0;
}
