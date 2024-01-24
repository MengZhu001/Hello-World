#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 10

typedef struct node {
    int key;
    int value;
    struct node *next;
} Node;

Node *hash_table[TABLE_SIZE];

int Hash(int key) {
    return key % TABLE_SIZE;
}

void Insert(int key, int value) {
    int index = hash(key);
    Node *new_node = (Node *)molloc(sizeof(Node));
    new_node->key = key;
    new_node->value = value;
    new_node->next = NULL;
    if (hash_table[index] == NULL) {
        hash_table[index] = new_node;
    } else {
        Node *current = hash_table[index];
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }
}

int search(int key) {
    int index = Hash(key);
    Node *current = hash_table[index];
    while (current != NULL) {
        if (current->key == key) {
            return current->value;
        }
        current = current->next;
    }
    return -1;
}

int main(void) {
    Insert(1,10);
    Insert(11,20);
    Insert(21,30);
    printf("%d\n", search(1));
    printf("%d\n", search(11));
    printf("%d\n", search(21));
    return 0;
}

