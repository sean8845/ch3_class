#include<stdio.h>
#include<stdlib.h>

int odd(int x);
int even(int x);
int total(int x);

int odd(int x) {
	int i, t = 0;
	for (i = 1; i <= x; i++)
		if (i % 2 == 1) t = t + i;
	return t;
}
int even(int x) {
	int i, t = 0;
	for (i = 1; i <= x; i++)
		if (i % 2 == 0) t = t + i;
	return t;
}
int total(int x) {
	return odd(x) + even(x);
}

int main(void) {
	int n, s;
	char ch;
	printf("1+2+3+4+...+n=?\n�п�Jn=");
	scanf_s("%d", &n);
	printf("\n�_�ƩM(O)�A���ƩM(E)�A��ƩM(I)\n�п�ܡG");
	scanf_s(" %c", &ch);

	switch (ch)
	{
	case 'O':
		s = odd(n);
		break;
	case 'E':
		s = even(n);
		break;
	case'I':
		s = total(n);
		break;
	default:
		printf("��ܿ��~\n");
		return -1;
	}
	printf("�`�X��%d\n", s);
	system("pause");
	return 0;
}
