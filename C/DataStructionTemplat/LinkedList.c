#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

void insert(node **head, int value) {
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = value;
    new_node->next = *head;
    *head = new_node;
}

void print(node *head) {
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main(void) {
    node *head = NULL;
    insert(&head, 3);
    insert(&head, 2);
    insert(&head, 1);
    print(head);
    return 0;
}

// data表示节点存储的值，
// next表示指向下一个节点的指针。
// insert函数用于在链表头部插入节点，
// print函数用于打印链表中的元素。
// 在程序结束前，需要释放动态分配的内存