#include <stdio.h>
int main(void) {
	unsigned int n;
	while (scanf("%d", &n) != EOF) {
		  printf("s=%u\n", n +((n - 1) * n) / 2); 
	}
	return 0;
}
