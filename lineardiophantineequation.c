//A Diophantine equation is a polynomial equation, usually in two or more unknowns, such that only the integral solutions are required. An Integral solution is a solution such that all the unknown variables take only integer values.

//Given three integers a, b, c representing a linear equation of the form : ax + by = c. Determine if the equation has a solution such that x and y are both integral values.

//Input : a = 3, b = 6, c = 9 Output: Possible
//Explanation : The Equation turns out to be, 
//3x + 6y = 9 one integral solution would be 
//x = 1 , y = 1

//For linear Diophantine equation equations, integral solutions exist if and only if, the GCD of coefficients of the two variables divides the constant term perfectly. In other words the integral solution exists if, GCD(a ,b) divides c.
ll gcd(ll a, ll b){
	if(a == 0)	return b;
	return gcd(b % a, a);
}

ll lineardiophantineequation(ll a, ll b, ll c){
	return (c % gcd(a, b) == 0);
}
