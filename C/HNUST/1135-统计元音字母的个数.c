#include <stdio.h>
#include <string.h>

int IsVowel(char ch) {
    if(ch == 'A'||ch == 'a'||ch == 'E'||ch == 'e'||ch == 'I'||ch == 'i'||ch == 'O'||ch == 'o'||ch == 'U'||ch == 'u')
        return 1; // 若传入字符为元音，返回 1；  
    else return 0; // 否则，返回 0；
}
void NumberOfVowel(char * str, int j){
    int ans = 0;
    for(int i = 0; i < j; i++) // 记录元音字母的个数
        ans += IsVowel(str[i]);
    printf("%d\n", ans);
}

int main(void) {
    char str[256];
    while (gets(str)) {
        if (str[0] == '\0') break; // 如果只输入一个回车就会退出。。。。不是题目也没说啊
        NumberOfVowel(str, strlen(str));
    }
    return 0;
}


// ----------------------------------------
// 11.14 上面的程序对了
// ~~会一直执行，无论有无输入,使超时。~~

// ----------------------------------------
/*
#include <stdio.h>

int IsVowel(char ch) {
    if(ch == 'A'||ch == 'a'||ch == 'E'||ch == 'e'||ch == 'I'||ch == 'i'||ch == 'O'||ch == 'o'||ch == 'U'||ch == 'u')
        return 1; // 若传入字符为元音，返回 1；  
    else return 0; // 否则，返回 0；
}
void NumberOfVowel(char * str,int j){
    int ans = 0;
    for(int i = 0; i < j; i++) // 记录元音字母的个数
        ans += IsVowel(str[i]);
    printf("%d\n", ans);
}

int main(void){
    int i = 0;
    char str[256];
    while(1)
    {
        while(i < 256){      //要限定输入字符数，否则 Segmentation fault:段错误，检查是否有数组越界，指针异常，访问到不应该访问的内存区域

        str[i] = getchar();// 要逐一输入每个字符，用 scanf() 空格输入会出问题；
        if(str[i] == '\n') break;
        i++;
        }
        if (i == 1) break; // 11.14 改
        NumberOfVowel(str, i);
        i = 0;
    }
    return 0;
}

// 参考：【【张老师讲题】C语言函数A统计元音字母【张老师和杜老师编程课】】 
/// https://www.bilibili.com/video/BV1sa4y1e7wR

*/



// ------------------------------------------------------ \\
// 之前写的
//Segmentation fault:段错误，检查是否有数组越界，指针异常，访问到不应该访问的内存区域
/*
#include <stdio.h>
// #include <string.h>

int main(void){
    char ch[257];
    int n, temp, x;
    while(1){
        // gets(ch);

        x = 0;
        while(temp = getchar()){
            ch[x] = temp;
            x++;
            if(temp == '\n') break;
        }

        n = 0;
        for(int i = 0; i < x; i++){
            if(ch[i] == 'A'||ch[i] == 'a'||ch[i] == 'E'||ch[i] == 'e'||ch[i] == 'I'||ch[i] == 'i'||ch[i] == 'O'||ch[i] == 'o'||ch[i] == 'U'||ch[i] == 'u')
                n++;
            else if(ch[i] == '\n') break;
            else continue;
        }
        for(int j = 0; j < 257; j++) ch[j] = '0';
        printf("%d\n", n);
    }
    return 0;
}
*/


// 运行超时

/*
#include <stdio.h
int main(void){
    char ch;
    int n = 0;
    while(1){
        while(ch != '\n'){
        ch = getchar();
        if(ch == 'A'||ch == 'a'||ch == 'E'||ch == 'e'||ch == 'I'||ch == 'i'||ch == 'O'||ch == 'o'||ch == 'U'||ch == 'u')
            n++;
        }
        printf("%d\n", n);
        n = 0;
        ch = '0';
    }
    return 0;
}
*/

