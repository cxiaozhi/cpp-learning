#include "LinearList.h"

// ��ʼ��
DynamicArray* Init_Arr() {
	//�����ڴ�
	DynamicArray* myArr = (DynamicArray*)malloc(sizeof(DynamicArray));
	//��ʼ��
	myArr->size = 0;
	myArr->capacity = 20;
	myArr->pAddr = (int*)malloc(sizeof(int)*myArr->capacity);
	return myArr;

};
// ����
void Push_Back_Array(DynamicArray* arr, int value) {
	if (arr == NULL) {
		return;
	}
	//�жϿռ��Ƿ��㹻
	if (arr->size == arr->capacity) {
		//�ռ䲻����չ�ռ� �¿ռ��Ǿɿռ��2��
	}

};
//����λ��ɾ��
void Remove_By_Position(DynamicArray* arr, int index) {
	if (arr == NULL) {
		return;
	}
	//�ж�λ���Ƿ���Ч
	if (index<0||index>= arr->size)
	{
		return;
	}
	//ɾ��Ԫ�� �ú�һλԪ�ظ���ǰһλԪ��
	for (int  i = index; i < index; i++)
	{
		arr->pAddr[i] = arr->pAddr[i + 1];
	}
	arr->size--;
};
//����ֵɾ��
void Remove_By_Value(DynamicArray* arr, int value) {
	if (arr == NULL) {
		return;
	}

};
//����
int Find_Array(DynamicArray* arr, int value) {
	if (arr == NULL) {
		return -1;
	}

	return -1;
};
//��ӡ
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
//�ͷŶ�̬�����ڴ�
void Clear_Array(DynamicArray* arr) {
	if (arr == NULL) {
		return;
	}
	if (arr->pAddr!=NULL) {
		free(arr->pAddr);
	}
	free(arr);
};
//��ö�̬��������
int Capacity_Arr(DynamicArray* arr) {
	if (arr == NULL) {
		return;
	}
	return arr->capacity;
};
//��ö�̬���鵱ǰԪ�ظ���
int Size_Arr(DynamicArray *arr) {
	if (arr == NULL) {
		return;
	}
	return arr->size;

};
//����λ�û��ĳ��λ��Ԫ��
int At_Arr(DynamicArray* arr, int index) {
	if (arr == NULL) {
		return;
	}
	return 0;

};