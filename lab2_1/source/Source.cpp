#include<stdio.h>
#include<stdlib.h>

long int f(int a);
	
long int f(int d) {
	long int r = 1;
	for (int i = 1; i <= d; i++)
		r *= i;
	return r;
}

int main(void) {
	int m, n;
	long int a, b, c, ans;
	printf("¨D±Æ²ÕC(m,n)\nm=");
	scanf_s("%d", &m);
	printf("n=");
	scanf_s("%d", &n);

	a = f(m);
	b = f(n);
	c = f(m - n);
	ans = a / (b * c);
	printf("C(%d,%d)=%d\n", m, n, ans);
	return 0;

	return 0;
}