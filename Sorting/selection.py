def selectionsort(a, n):
	for i in range(0, n - 1):
		mini = i;
		for j in range(i + 1, n):
			if(a[j] < a[mini]):	mini = j;
		a[i], a[mini] = a[mini], a[i];

n = input();
a = [int(i) for i in raw_input().split()];
selectionsort(a, n);
for ch in a:	print ch,;
