#This program prints the array in a type of wave i.e a[0] >= a[1] <= a[2] >= a[3] and so on. Since, many answers are possible we have to print the lexicographically smallest array.
a = [int(i) for i in raw_input().split()]; l = len(a); i, j = 0, l - 1; a.sort(); li = [];
if(l % 2 == 0):
	while(i < l):
		li.append(a[i + 1]); li.append(a[i]);
		i += 2;
else:
	while(i < l - 1):
		li.append(a[i + 1]); li.append(a[i]);
		i += 2;
	li.append(a[i]);	
print li;
