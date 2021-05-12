#ifndef Array_Stack_H
#define Array_Stack_H

#include <stdio.h>
#include <malloc.h>

typedef int sData;
typedef sData Node;

typedef struct tagArrayStack {
	int Top;
	int Capacity;
	Node* Nodes;
}ArrayStack;

//���� ����
void AS_CreateStack(ArrayStack** Stack, int Capacity);

//���� ����
void AS_DestroyStack(ArrayStack** Stack);
//��� Ǫ��
void AS_Push(ArrayStack* Stack, sData Data);
//������ �� á����
int AS_IsFull(ArrayStack* Stack);
//���� ��
sData AS_Pop(ArrayStack* Stack);

#endif //Array_Stack_H
