#include <stdio.h>
int main()
{
    float speed, fileSize, needTime;
    printf("please type download speed (Mb/s):\n");
    scanf("%f", &speed);
    
    printf("please type file size(MB):\n");
    scanf("%f", &fileSize);

    needTime = (fileSize * 8) / speed;
    printf("At %f megabits per second , a file of %f megabytes\n downloads in %.2f seconds.", 
            speed, fileSize, needTime);
    
    return 0;
}