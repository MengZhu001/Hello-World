#include <stdio.h>

int main(void) {
	int n;
	unsigned long long s, p;
	while (scanf("%d", &n) != EOF) {
		s = 1; p = 1;
		for (int i = 1; i < n; i++) {
		  	    p *= 2;
				s += p;
		}
		printf("%llu\n", s);
	}
	
	return 0;
	
} 
