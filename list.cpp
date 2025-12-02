/*
 * the first  
 * */

#include <cstddef>
#include <cstdlib>
#include <cstring>
#include <iostream>

typedef struct Node {
	int content;
	
	Node * pre;
	Node * next;
} Node;

typedef struct List {
	Node * head;
	Node * tail;
} List;


/* replace the logic of Node with List->head->Next */
bool insert_node(Node * head , Node * node){
	head->next = node;
	node->next = NULL;
	return true; 
}

bool irator_list(Node * head) {
	while (head != NULL){
		std::cout << head->content << std::endl;
		head = head->next;
	}

	return true;
}

int main(void)
{
	Node * head = (Node *)malloc(sizeof(Node));

	Node * tail = (Node *)malloc(sizeof(Node));
	
	Node * tail2 = (Node *)malloc(sizeof(Node));
	
	/* head */
	head -> content = 1;

	tail -> content = 2;
	
	tail2 -> content = 3;
	
	insert_node(head, tail);

	insert_node(tail, tail2);

	irator_list(head);	
	return 0;
}
