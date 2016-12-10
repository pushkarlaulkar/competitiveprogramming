//This program checks if a charachter is vowel. If vowel then it will return 1, else return 0 meaning it is consonant.
int check_vowel(char a){
	if (a >= 'A' && a <= 'Z')	a = a + 'a' - 'A';
	if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')	return 1;
	return 0;
}
