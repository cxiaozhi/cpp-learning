#include "seq_list.h"

// 构造一个顺序表
int InitList_sq(SqList &L)
{

    L.elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if (!L.elem)
    {
        return 0;
    }
    L.length = 0;
    L.listsize = LIST_INIT_SIZE;
    return 1;
};

// 销毁线性表
void destroyList(SqList &L)
{
    L.elem = NULL;
};

// 判断是否为空表
int isEmpty(SqList &L)
{
    if (L.length == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
};

// 在特定位置插入元素
int insertElem(int position, int value, SqList &L){

};