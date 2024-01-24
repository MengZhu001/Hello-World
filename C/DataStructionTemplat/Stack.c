// 栈可以通过数组或链表实现。在C语言中，可以使用数组实现栈。

#include <stdio.h>
#define MAX_SIZE 10

typedef struct {
    int arr[MAX_SIZE];
    int top;
} stack;

void init(stack *s) {
    s->top = -1;
}

void push(stack *s, int value) {
    if (s->top == MAX_SIZE - 1) {
        printf("Stack Overflow!\n");
        return;
    }
    s->arr[++s->top] = value;
}

int pop(stack *s) {
    if (s->top == -1) {
        printf("Stack Uderflow!\n");
        return -1;
    }
    return s->arr[s->top--];
}

int main(void) {
    stack s;
    init(&s);
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    printf("%d\n", pop(&s));
    printf("%d\n", peek(&s));
    return 0;
}

// arr表示存储栈元素的数组，
// top表示栈顶元素的下标。
// init函数用于初始化栈，
// push函数用于将元素入栈，如果栈已满则报错，
// pop函数用于将栈顶元素出栈，如果栈为空则报错，
// peek函数用于查看栈顶元素，但不将其出栈。
// 在程序结束前，不需要显式释放内存。