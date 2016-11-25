//checks if string b is subsequence of string a
bool issubsequence(char b[], char a[], int lb, int la){
	if(lb == 0)	return true;
	if(la == 0)	return false;
	//If last characters of two strings are matching
	if(b[lb - 1] == a[la - 1])	return issubsequence(b, a, lb - 1, la - 1);
	//If last characters are not matching
	return issubsequence(b, a, lb, la - 1);
}
