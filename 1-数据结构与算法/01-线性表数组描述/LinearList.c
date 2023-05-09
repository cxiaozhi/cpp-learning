#include "LinearList.h"

// 初始化
DynamicArray* Init_Arr() {
	//申请内存
	DynamicArray* myArr = (DynamicArray*)malloc(sizeof(DynamicArray));
	//初始化
	myArr->size = 0;
	myArr->capacity = 20;
	myArr->pAddr = (int*)malloc(sizeof(int)*myArr->capacity);
	return myArr;

};
// 插入
void Push_Back_Array(DynamicArray* arr, int value) {
	if (arr == NULL) {
		return;
	}
	//判断空间是否足够
	if (arr->size == arr->capacity) {
		//空间不足拓展空间 新空间是旧空间的2倍
	}

};
//根据位置删除
void Remove_By_Position(DynamicArray* arr, int index) {
	if (arr == NULL) {
		return;
	}
	//判断位置是否有效
	if (index<0||index>= arr->size)
	{
		return;
	}
	//删除元素 让后一位元素覆盖前一位元素
	for (int  i = index; i < index; i++)
	{
		arr->pAddr[i] = arr->pAddr[i + 1];
	}
	arr->size--;
};
//根据值删除
void Remove_By_Value(DynamicArray* arr, int value) {
	if (arr == NULL) {
		return;
	}

};
//查找
int Find_Array(DynamicArray* arr, int value) {
	if (arr == NULL) {
		return -1;
	}

	return -1;
};
//打印
void Print_Array(DynamicArray* arr) {
	if (arr == NULL) {
		return;
	}
	for (int i = 0; i < arr->size; i++)
	{
		prinf("%d",arr->pAddr[i]);
	}
	prinf("\n");
};
//释放动态数组内存
void Clear_Array(DynamicArray* arr) {
	if (arr == NULL) {
		return;
	}
	if (arr->pAddr!=NULL) {
		free(arr->pAddr);
	}
	free(arr);
};
//获得动态数组容量
int Capacity_Arr(DynamicArray* arr) {
	if (arr == NULL) {
		return;
	}
	return arr->capacity;
};
//获得动态数组当前元素个数
int Size_Arr(DynamicArray *arr) {
	if (arr == NULL) {
		return;
	}
	return arr->size;

};
//根据位置获得某个位置元素
int At_Arr(DynamicArray* arr, int index) {
	if (arr == NULL) {
		return;
	}
	return 0;

};