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

//스택 생성
void AS_CreateStack(ArrayStack** Stack, int Capacity);

//스택 삭제
void AS_DestroyStack(ArrayStack** Stack);
//노드 푸쉬
void AS_Push(ArrayStack* Stack, sData Data);
//스택이 다 찼는지
int AS_IsFull(ArrayStack* Stack);
//스택 팝
sData AS_Pop(ArrayStack* Stack);

#endif //Array_Stack_H
