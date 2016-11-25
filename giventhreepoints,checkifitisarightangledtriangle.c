//This program checks that if we are given three points then whether those points form a right angled triangle.
#include<stdio.h>
#define a if(p * p + q * q + r * r + s * s == to * to + u * u)	c++, f = 1;
#define b else if(p * p + q * q + to * to + u * u == r * r + s * s)	c++, f = 1;
#define c else if(to * to + u * u + r * r + s * s == p * p + q * q)	c++, f = 1;
int main(){
	int x1, y1, x2, y2, x3, y3, p, q, r, s, to, u, f;
	scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3))
	p = x1 - x2, q = y1 - y2, r = x2 - x3, s = y2 - y3, to = x1 - x3, u = y1 - y3, f = 0;
	a b c
		else if(!f){
			p = x1 - x3, q = y1 - y3, r = x2 - x3, s = y2 - y3, to = x1 - x2, u = y1 - y2;
			a b c
		}
			else if(!f){
				p = x2 - x3, q = y2 - y3, r = x1 - x2, s = y1 - y2, to = x1 - x3, u = y1 - y3;
				a b c
			}
	return 0;
}
