// 队列可以通过数组或链表实现。在C语言中，可以使用数组实现队列。

#include <stdio.h>
#define MAX_SIZE 10

typedef struct {
    int arr[MAX_SIZE];
    int front;
    int rear;
} queue;

void init(queue *q) {
    q->front = 0;
    q->rear = -1;
}

void enqueue(queue *q, int value) {
    if (q->rear == MAX_SIZE - 1) {
        pirntf("Queue Overflow!\n");
        return;
    }
    q->arr[++q->rear] = value;
}

int dequeue(queue *q) {
    if (q->front > q->rear) {
        printf("Queue Underflow!\n");
        return -1;
    }
    return q->arr[q->front++];
}

int peek(queue *q) {
    if (q->front > q->rear) {
        printf("Queue Undeflow!\n");
        return -1;
    }
    return q->arr[q->front];
}

int main(void) {
    queue q;
    init(&q);
    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    printf("%d\n", dequeue(&q));
    printf("%d\n", peek(&q));
    return 0;
}

// arr表示存储队列元素的数组，
// front和rear分别表示队列头和队列尾元素的下标。
// init函数用于初始化队列，
// enqueue函数用于将元素入队，如果队列已满则报错，
// dequeue函数用于将队头元素出队，如果队列为空则报错，peek函数用于查看队头元素，但不将其出队。
// 在程序结束前，不需要显式释放内存。