#pragma once
#include <iostream>

struct Node {
	int N;
	Node* next;
};

int lenOfNode(Node* X) 
{
	int i = 0;
	Node* t = X;
	for (; t->next != nullptr; t = t->next) {
		i++;
	}
	 return (X == nullptr) ? 0 : i + 1;
};

Node* concatNodes(Node* first_head, Node* second_head) 
{
	Node* t = first_head;
	for (; t->next != nullptr; t = t->next) { }
	t->next = second_head;
	return first_head;
};

int writeNode(Node* X) 
{
	Node* Y = X;
	for (; Y->next != nullptr; Y = Y->next) {
		std::cout << Y->N << " ";
	}
	std::cout << Y->N << std::endl;
	return 0;
};

bool hasLoop(Node* X)