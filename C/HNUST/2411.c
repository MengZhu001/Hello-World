#include<stdio.h>
int isLucky(long long phone);
int main(void)
{
	long long phone;
	scanf("%lld",&phone);
	if(isLucky(phone))	
		printf("This is a lucky phone number\n");
	else
		printf("This is not a lucky phone number\n");
	return 0;
}

int isLucky(long long phone) {
    long long temp = phone;
    for (int i = 0; i < 11; i++) {
        if (temp % 10 == 4) return 0;
        else temp /= 10;
    }
    
    if ((phone % 100 == 88 || phone % 100 == 66))
        return 1;
    return 0;

}