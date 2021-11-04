#include<stdio.h>
#include<stdlib.h>

long int f(int a);

long int f(int d) {
	if (d > 1) {
		long int r = d * f(d - 1);
		return r;
	}
	else return 1;
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
}