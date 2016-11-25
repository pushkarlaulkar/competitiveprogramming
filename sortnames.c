//This programs sorts a list of names in alphabetical order
#include<stdio.h>
#include<string.h>
int main(){
	char string[100][100], dummy[100]; int i, j, n;
	for(i = 0, scanf("%d", &n); i < n; scanf("%s", string[i++]));	//n is number of strings to be taken as input
	//Sorting begins
	for(i = 1; i < n; i++){
		for(j = 1; j <= n - i; j++){
			if(strcmp(string[j - 1], string[j]) > 0){
				strcpy(dummy, string[j - 1]);
				strcpy(string[j - 1], string[j]);
				strcpy(string[j], dummy);
			}
		}
	}
	for(i = 0; i < n; printf("%s\n", string[i++]));		
	return 0;
}
