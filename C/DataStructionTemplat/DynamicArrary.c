// 动态数组
#include <stdio.h>
#include <stdlib.h>
 // 采用这种方式，可以在申明结构体变量时少写一个 struct
typedef struct { // 定义一个数据类型，名叫 dynamic_arrary ，此数据类型是结构体
    int *arr;  // 指向实际存储元素的数组
    int size; // 当前数组中的元素的个数
    int capacity;  // 数组最多可以容纳的元素个数
} dynamic_arrary;

void init(dynamic_arrary *da,int capacity) { // 初始化动态数组
    da->arr = (int *)malloc(capacity * sizeof(int));
    da->size = 0;
    da->capacity = capacity;
}

void append(dynamic_arrary *da, int value) {  // 用于在数组末尾添加元素，如果数组容量不足，则动态扩展数组容量
    if (da->size == da -> capacity) {
        da->capacity *= 2;
        da->arr = (int *)realloc(da->arr,da->capacity * sizeof(int));
    }
}

void print(dynamic_arrary *da) {  // 打印数组中的元素
    for (int i = 0; i < da->size; i++) {
        printf("%d ", da->arr[i]);
    }
    printf("\n");
}

int main(void) {
    dynamic_arrary da;  // 定义一个 dynamic_arrary（结构体）变量
    init(&da, 10);
    append(&da, 1);
    append(&da, 2);
    append(&da, 3);
    print(&da);
    free(da.arr); // 释放分配的内存
    return 0;
}