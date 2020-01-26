#include <iostream>

class node {
public:
	int value;
	node* next;
	node() { value = 0; next = 0; }
};

class List{
	public:

	int count;
	node* head;
	List();
	friend std::ostream & operator <<(std::ostream& out, List& ob);
	List& operator +=(int x);
	void deleteNode(node* a);
	void rearranged();
	~List();
	};
