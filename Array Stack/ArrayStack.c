#define _CRT_SECURE_NO_WARNINGS
#include "ArrayStack.h"

int main() {
	int i;
	ArrayStack* Stack = NULL;
	//스택 만들기
	AS_CreateStack(&Stack, 3);
	//스택 푸쉬
	for (i = 0; i < 5; i++) 
		AS_Push(Stack, i + 5);
	//스택 노드 출력
	for (i = 0; i < Stack->Top; i++)
		printf("%d\n", Stack->Nodes[i]);
	printf("\n\n\n");
	//스택 팝
	for (i = 0; i < 2; i++)
		AS_Pop(Stack);
	//스택 노드 출력
	for (i = 0; i < Stack->Top; i++)
		printf("%d\n", Stack->Nodes[i]);
	//스택 삭제
	AS_DestroyStack(&Stack);
}