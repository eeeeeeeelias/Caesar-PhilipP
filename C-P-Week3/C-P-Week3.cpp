#include "4_linkedlist.h"
#include <iostream>

const int Xl = 2, Xr = 14, Yl = 19, Yr = 24;

int main()
{
	Node* X = new Node;
	Node* Y = new Node;
	Node* t = new Node;
	X->N = Xl;
	X->next = nullptr;
	Y->N = Yl;
	Y->next = nullptr;
	t->N = 0;
	t->next = nullptr;
	for (int i = Xl + 1; i <= Xr; i++) {
		t = new Node;
		t->N = i;
		t->next = nullptr;
		concatNodes(X, t);
	}
	writeNode(X);
	std::cout << "|X| = " << lenOfNode(X) << std::endl;
	for (int i = Yl + 1; i <= Yr; i++) {
		t = new Node;
		t->N = i;
		t->next = nullptr;
		concatNodes(Y, t);
	}
	writeNode(Y);
	std::cout << "|Y| = " << lenOfNode(Y) << std::endl;
	X = concatNodes(X, Y);
	writeNode(X);
	std::cout << "|X + Y| = |X| + |Y| = " << lenOfNode(X) << std::endl;
	system("pause");
    return 0;
}