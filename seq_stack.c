#include <stdio.h>
#include <stdbool.h>

/**
 * pass address vs pass value
 */
const int MAX_SIZE = 20;

typedef struct SeqStack {
	int top;
	int element[];
} SeqStack;

void InitStack(SeqStack *s) {
	s->top = -1;
}

bool StackEmpty(SeqStack s) 	{
	return s.top == -1;
}

bool PushStack(SeqStack *s, int value) {
	if (s->top >= MAX_SIZE - 1) {
		return false;
	}
	s->element[++s->top] = value;
	return true;
}

bool PopStack(SeqStack *s, int *popValue) {
	if (s->top == -1) {
		return false;
	}
	*popValue = s->element[s->top--];
	return true;
}

int main(int argc, char const *argv[]) {
	SeqStack stack;
	InitStack(&stack);
	// in stack
	for (int i = 0; i < 5; i++) {
		PushStack(&stack, i);
	}
	// out stack
	int popValue;
	while (!StackEmpty(stack)) {
		PopStack(&stack, &popValue);
		printf("popValue = %d\n", popValue);
	}
	return 0;
}