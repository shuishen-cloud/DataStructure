/*
 * */

#include <iostream>

typedef struct Node {
	int content;
	
	Node * pre;
	Node * next;
} Node;

bool insert_node(Node * head , Node * node){
	head->next = node;

	return 0;
}

bool irator_list(Node * head) {
	return 0;
}

int main(void)
{
	Node * head;

	Node * tail;
	
	/* head */
	head -> content = 1;

	tail -> content = 2;

	insert_node(head, tail);

	irator_list(head);	
	return 0;
}
