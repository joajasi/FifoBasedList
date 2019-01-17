typedef struct Node {
	int val;
	Node* next;
} Node;

class List {
	public:
	List(Node* head, Node* tail);	
	void push(int val);
	void pop();
        void show(); 

	private:
	Node* head;
	Node* tail;
};
