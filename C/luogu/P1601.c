// P1601 A+B Problem（高精）
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void FillZero(char * a, char * b, int la ,int lb){
	if(la < lb) for(int i = la + 1; i <= lb; i++) a[i] = '0';
	else if(lb < la) for(int j = lb + 1; j <= la; j++) b[j] = '0';
}

void SwapHigeAndLow(char * a, char * b, int la, int lb){
	for(int i = 0; i < la / 2; i++) a[i] ^= a[la-i] ^= a[i] ^= a[la-i]; // 输入时，数字的高位在数组的低位
	for(int i = 0; i < lb / 2; i++) b[i] ^= b[la-i] ^= b[i] ^= b[la-i];
}

void Add(char * a, char * b, char * c){
	int la = strlen(a), lb = strlen(b), jw = 0;

	SwapHigeAndLow(a, b, la, lb);
	FillZero(a, b, la, lb);

	int i = 0;
	for(; i < strlen(a); i++){
		c[i] = a[i] + b[i] + jw - 2 * '0';
		jw = c[i] / 10; 
		c[i] %= 10;

		c[i] += '0';
	}
	if(jw > 0) c[i + 1] = jw; 
}

int main(void){

	char a[505], b[505], c[500];
	scanf("%s%s", a, b);

	Add(a, b, c);

	for(int i = strlen(c); i >= 0; i--){
		printf("%c", c[i]);
	}

	return 0;
}


//-----------------------------------
//初中毕业那个暑假报班时写的
//---------------------------------
/* C++
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int la, lb, bw, jw = 0;
	char a[505], b[505], c[505];

	cin >> a >> b;
	la = strlen(a);
	lb = strlen(b);

	for(int i = 0; i < la / 2;  i++) swap(a[i], a[la-1-i]);//反转 
	for(int i = 0; i < lb / 2; i++) swap(b[i], b[lb-1-i]);

	for(int i = la; i < lb; i++) a[i] = '0'; //高位补零 
	for(int i = lb; i < la; i++) b[i] = '0';

	if(la > lb) lb = la;
	else la = lb;
    
	for(int i=0; i<la; i++){
		bw = a[i] - '0' + b[i] - '0' + jw;//相加 
		jw = bw / 10;//处理进位 
		bw = bw % 10;
		c[i] = bw + '0';
	}
	if(jw > 0) cout << jw;//处理最后的进位 
	for(int i = la - 1; i >= 0; i--) cout << c[i]; //转回 
} 
*/