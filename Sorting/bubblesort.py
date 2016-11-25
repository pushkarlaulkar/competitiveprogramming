def bubblesort(a, n):
	for i in range(0, n - 1):
		for j in range(0, n - i - 1):
			if(a[j] > a[j + 1]):	a[j], a[j + 1] = a[j + 1], a[j];
n = input();
a = [int(i) for i in raw_input().split()];
bubblesort(a, n);
for ch in a:	print ch;
