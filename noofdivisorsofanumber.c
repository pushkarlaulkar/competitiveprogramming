int noofdivisorsofanumber(int n){
	int i, c = 0;
	for(i = 1; i * i <= n; i++){
		if(!(n % i)){
			if(i * i == n)	c++;
				else	c += 2;
		}
	}
	return c;
}
