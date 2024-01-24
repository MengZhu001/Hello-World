/*  常用圆形体的体积计算器，1：计算球体，2：计算圆柱体，3：计算圆锥体 */
#include <stdio.h>
#include <math.h>
#define  PI 3.141592654

double vol_ball(void) {
	double r;

	printf("请输入球体的半径：\n");
	scanf("%lf", &r);

	return (4.0 / 3.0 * PI * r * r * r);
}

/*  计算圆柱体体积 V=PI*r*r*h  */
double vol_cylind(void) {
	double r , h;

	printf("请输入圆柱体的底圆半径和高：\n");
	scanf("%lf%lf", &r, &h);

	return (PI * r * r * h);
}

/*  计算圆锥体体积 V=h/3*PI*r*r  */
double vol_cone(void) {
	double r , h;

	printf("请输入圆锥体的底圆半径和高：\n");
	scanf("%lf%lf", &r,&h);

	return (PI * r * r * h / 3.0);
}

/*  常用圆形体体积计算器的主控函数  */
void cal (int sel) {
	double  vol_ball(void);			/*  函数声明  */
	double  vol_cylind(void);
	double  vol_cone(void );

	switch (sel) {
    	case 1: 	/*  计算球体体积  */
			printf("球体体积为：%.2f\n", vol_ball());
			break;
        case 2:  	/*  计算圆柱体体积  */
			printf("圆柱体体积为：%.2f\n", vol_cylind());
			break;
        case 3:  	/*  计算圆锥体体积  */
			printf("圆锥体体积为：%.2f\n", vol_cone());
			break;
	}
}

int main(void)
{
    int sel; 

/*  循环选择计算圆形体的体积，直到输入非1～3的数字为止  */
    while(1){			/* 永久循环，通过循环体中 break 语句结束循环 */
		printf("  1-计算球体体积\n");		
		printf("  2-计算圆柱体体积\n");
		printf("  3-计算圆锥体体积\n");
		printf("  其他-退出程序运行\n");
		printf("请输入计算命令：\n");  	/* 输入提示*/
		scanf("%d", &sel);

		if (sel < 1 || sel > 3) break;     	    
        else cal (sel);
    }

	return 0;
}