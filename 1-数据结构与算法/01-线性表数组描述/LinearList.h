#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H
#include<stdint.h>
#include<stddef.h>


typedef struct DynamicArray {
	int* pAddr;// ������ݵĵ�ַ
	int size;// ��ǰ�ж��ٸ�Ԫ��
	int capacity;// ���� ��������ǰ��������ɶ���Ԫ��
}DynamicArray;

// дһЩ�Խṹ������ĺ���
// ��ʼ�� ������һ����ʼ������
DynamicArray* Init_Arr();
// ����
void Push_Back_Array(DynamicArray* arr,int value);
//����λ��ɾ��
void Remove_By_Position(DynamicArray* arr,int index);
//����ֵɾ��
void Remove_By_Value(DynamicArray* arr,int value);
//����
int Find_Array(DynamicArray* arr,int value);
//��ӡ
void Print_Array(DynamicArray* arr);
//�ͷŶ�̬�����ڴ�
void Clear_Array(DynamicArray* arr);
//��ö�̬��������
int Capacity_Arr(DynamicArray* arr);
//��ö�̬���鵱ǰԪ�ظ���
int Size_Arr(DynamicArray* arr);
//����λ�û��ĳ��λ��Ԫ��
int At_Arr(DynamicArray* arr,int index);

#endif // DYNAMIC_ARRAY_H
