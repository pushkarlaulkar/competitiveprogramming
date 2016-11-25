//Proper divisors are divisors of a number except the number itself
//'n' is a number for whom we have to find sum of proper divisors of the number.s = 0;
//We will only go till square root of that number because if a number 'i' is divisible by 'n' then 'n / i' will be also divisible by 'n'.

for(s = 0, i = 2; i * i <= n; i++)	if(!(n % i))	s += i + n / i;
d = sqrt(n);
(d * d == n) ? printf("%d\n", s + 1 - d) : printf("%d\n", s + 1); //We have done this because if 'n' is a perfect square then square root of 'n' will be added twice. Therefore, we subtract one time square root of 'n'. We have started from 2 in the for loop because if we start from 1 then 'n / 1' i.e. the number itself will also be added. Then the property of proper divisors doesn't hold.
