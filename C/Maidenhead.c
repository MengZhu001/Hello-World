#include <stdio.h>
int main(void) {
    double longitude, latitude;
    double a, b, c;
    printf("此时程序时将锁输入的经纬度，转换成业余无线电网格定位\n\n");
    printf("请依次输入所求地点的经度的度、分、秒，且用逗号隔开\n");
    printf("(东经为正、西经为负):\n");
    while (1) {
        scanf("%lf,%lf,%lf", &a, &b, &c);
        longitude = a + b / 60 + c / 3600 + 1 +1000000;
        if( -180 < longitude && 180 > longitude) break;
        printf("输入错误，请从新输入...!");
    }
    printf("请依次输入所求地点的纬度的度、分、秒，且用逗号隔开\n");
    printf("(北纬为正、南纬为负):\n");
    while (1) {
        scanf("%lf,%lf,%lf", &a, &b, &c);
        longitude = a + b / 60 + c / 3600 + 1 +1000000;
        if( -180 < longitude && 180 > longitude) break;
        printf("输入错误，请从新输入...!");
    }
}