#include <stdlib.h>
#include <iostream>
#define LIST_INIT_SIZE 100
#define LIST_INCREMENT 10
typedef int ElemType;
typedef struct SqList
{
    // 保存首地址而已 int类型的保存一个地址
    ElemType *elem;
    int length;
    int listsize;
} SqList;

// 构造一个顺序表
int InitList_sq(SqList &L);
// 销毁线性表
void destroyList(SqList &L);
// 清空线性表
void clearList(SqList &L);
// 判断是否为空表
int isEmpty(SqList &L);
// 在特定位置插入元素
int insertElem(int position, int value, SqList &L);
// 在特定位置删除元素
int delElemByIndex(int position, SqList &L);
// 根据值删除元素
int delElemByValue(int position, SqList &L);