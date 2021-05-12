#define _CRT_SECURE_NO_WARNINGS
#include "ArrayStack.h"

int main() {
	int i;
	ArrayStack* Stack = NULL;
	//���� �����
	AS_CreateStack(&Stack, 3);
	//���� Ǫ��
	for (i = 0; i < 5; i++) 
		AS_Push(Stack, i + 5);
	//���� ��� ���
	for (i = 0; i < Stack->Top; i++)
		printf("%d\n", Stack->Nodes[i]);
	printf("\n\n\n");
	//���� ��
	for (i = 0; i < 2; i++)
		AS_Pop(Stack);
	//���� ��� ���
	for (i = 0; i < Stack->Top; i++)
		printf("%d\n", Stack->Nodes[i]);
	//���� ����
	AS_DestroyStack(&Stack);
}