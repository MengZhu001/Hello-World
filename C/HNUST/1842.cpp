#include <stdio.h>
long long pow(int a, int b);
int main(void) {
	int a, b;
	while (scanf("%d%d", &a, &b) && b != -1) {
		  printf("%lld\n", pow(a, b));
	}
	return 0;
} 

long long pow(int a, int b) {
	 long long s = 1;
	 for (int i = 0; i < b; i++) {
	  	 s *= a;
	 }
	  return s;
}
