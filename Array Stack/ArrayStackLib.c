#include "ArrayStack.h"

//���� ����
void AS_CreateStack(ArrayStack** Stack, int Capacity) {
	(*Stack) = (ArrayStack*)malloc(sizeof(ArrayStack));

	(*Stack)->Nodes = (sData*)malloc(sizeof(Node) * Capacity);

	(*Stack)->Capacity = Capacity;
	(*Stack)->Top = 0;
}

//���� ����
void AS_DestroyStack(ArrayStack** Stack) {
	free((*Stack)->Nodes);
	free((*Stack));
	*Stack = NULL;
}

//������ �� á����
int AS_IsFull(ArrayStack* Stack) {
	return Stack->Capacity == Stack->Top;
}

//��� Ǫ��
void AS_Push(ArrayStack* Stack, sData Data) {
	if(!AS_IsFull(Stack))
		Stack->Nodes[(Stack->Top)++] = Data;
}

//���� ��
sData AS_Pop(ArrayStack* Stack) {
	return Stack->Nodes[--(Stack->Top)];
}

