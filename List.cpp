#include <iostream>
#include <cstddef>
#include "List.h"
using namespace std;

List::List(Node* head, Node* tail) {
	this->head = head;
	this->tail = tail;
	this->head->next = NULL;
	this->head->next = NULL;
}

void List::push(int val) {
	cout << "List push: " << val << endl;
	Node* node = new Node();
	node->val = val;
        if (head->next) {
		node->next = head->next;
		head->next = node;
	}
	else {
        	node->next = NULL;
		head->next = node;
		tail->next = node;
	}
}

void List::pop() {
	if (head->next  && (head->next == tail->next)) {
		cout << "List pop: " << head->next->val << endl;
		delete head->next;
		head->next = NULL;
		tail->next = NULL;
	}
	else if (head->next) {
		Node* prevNode = head->next;
		while(prevNode->next != tail->next) {
			prevNode = prevNode->next;
		}
		cout << "List pop: " << prevNode->next->val << endl;
		tail->next = prevNode;
		delete prevNode->next;
		prevNode->next = NULL;	
	}	
}

void List::show() {
	Node* node = head->next;
	cout << "List: ";
	while(node) {
		std::cout << node->val << ", ";
		node = node->next;
	}
	cout << endl;
}
