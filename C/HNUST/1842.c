#include <stdio.h>
long long pow(int a,int b){
    long long pow = 1;
    if(a == 0) pow = 0;
    else if(b == 0) pow = 1;
    else{
        for(int  i = b; i > 0; i--){
        	pow *= a;
        }
    }

    return pow;
}
int main(){
    int a, b;
    while(1){
        scanf("%d%d", &a, &b);
        if(b == -1) break;
        printf("%lld\n", pow(a, b));
    }
    return 0;
}
