#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H
#include<stdint.h>
#include<stddef.h>


typedef struct DynamicArray {
	int* pAddr;// 存放数据的地址
	int size;// 当前有多少个元素
	int capacity;// 容量 我容器当前最大能容纳多少元素
}DynamicArray;

// 写一些对结构体操作的函数
// 初始化 声明了一个初始化函数
DynamicArray* Init_Arr();
// 插入
void Push_Back_Array(DynamicArray* arr,int value);
//根据位置删除
void Remove_By_Position(DynamicArray* arr,int index);
//根据值删除
void Remove_By_Value(DynamicArray* arr,int value);
//查找
int Find_Array(DynamicArray* arr,int value);
//打印
void Print_Array(DynamicArray* arr);
//释放动态数组内存
void Clear_Array(DynamicArray* arr);
//获得动态数组容量
int Capacity_Arr(DynamicArray* arr);
//获得动态数组当前元素个数
int Size_Arr(DynamicArray* arr);
//根据位置获得某个位置元素
int At_Arr(DynamicArray* arr,int index);

#endif // DYNAMIC_ARRAY_H
