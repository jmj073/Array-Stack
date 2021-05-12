#include "ArrayStack.h"

//스택 생성
void AS_CreateStack(ArrayStack** Stack, int Capacity) {
	(*Stack) = (ArrayStack*)malloc(sizeof(ArrayStack));

	(*Stack)->Nodes = (sData*)malloc(sizeof(Node) * Capacity);

	(*Stack)->Capacity = Capacity;
	(*Stack)->Top = 0;
}

//스택 삭제
void AS_DestroyStack(ArrayStack** Stack) {
	free((*Stack)->Nodes);
	free((*Stack));
	*Stack = NULL;
}

//스택이 다 찼는지
int AS_IsFull(ArrayStack* Stack) {
	return Stack->Capacity == Stack->Top;
}

//노드 푸쉬
void AS_Push(ArrayStack* Stack, sData Data) {
	if(!AS_IsFull(Stack))
		Stack->Nodes[(Stack->Top)++] = Data;
}

//스택 팝
sData AS_Pop(ArrayStack* Stack) {
	return Stack->Nodes[--(Stack->Top)];
}

