def insertionsort(a, n):
	for i in range(0, n):
		t = a[i]; j = i;
		while(t < a[j - 1] and j > 0):
			a[j] = a[j - 1]; j -= 1;
		a[j] = t;

n = input();
a = [int(i) for i in raw_input().split()];
insertionsort(a, n);
for ch in a:	print ch,;
