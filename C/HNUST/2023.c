#include <stdio.h>
int main(void){
    int n, target, nums[21], k;
    scanf("%d%d", &n, &target);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    for ( k = 0; k < n; k++) {
        if (nums[k] == target) {
            printf("%d", k);
            break;
        }
    }
    if (k == n) printf("Not Found");
    
    return 0;
}