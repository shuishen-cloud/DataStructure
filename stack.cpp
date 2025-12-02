/*
 * if we have a dynamitic list, we can do anything - Lisp
 * */


#include <cstdlib>
#include <iostream>

typedef struct Stack Stack ;
typedef void(*popFunc)(Stack *);

typedef struct Stack {
	void * top;
	popFunc pop;
} Stack;

void stack_pop (Stack * stack){
	std::cout << "pop" << std::endl;
}

Stack * create_stack() {
	Stack * stack = (Stack *)malloc(sizeof(Stack));
	stack->pop = stack_pop;
	return stack;
}

int main(void)
{
	Stack * stack = create_stack();
	stack->pop(stack);

	free(stack);
	return 0;
}
