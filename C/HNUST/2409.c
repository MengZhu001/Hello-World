#include <stdio.h>
#include <string.h>
int main(void) {
	char bin[9];
	scanf("%s", bin);
    int len = strlen(bin);

	if (bin[0] == '0') // 正数的反码与原码相同
		printf("%s", bin);
	else {
		for (int i = 1; i < len; i++) {
			switch (bin[i]) {
                case '1': bin[i] = '0';
                          break;
                case '0': bin[i] = '1';
                          break;
            }
		}
		printf("%s", bin);
	}
	return 0;
}