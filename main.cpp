#include "List.h"

int main() {
	Node head;
	Node tail; 
	List list(&head, &tail);
	list.show();
	list.push(11);
	list.push(12);
	list.push(13);
	list.show();
	list.pop();
	list.show();
	list.push(14);
	list.push(15);
	list.show();
	list.pop();
	list.show();
	list.pop();
	list.pop();
	list.pop();
	list.show();
}
