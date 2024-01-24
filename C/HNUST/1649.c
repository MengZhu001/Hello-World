#include <stdio.h>
int main(void) {
	int n, n1;
	long p1, p2;
	scanf("%d", &n);
	n1 = n / 2;
	p1 = (n - n1) + (n - n1 - 1) * (n - n1);
	p2 = 2 * n1 + (n1 - 1) * (n1);
	printf("%ld", p1 - p2);
	return 0;
  
}
