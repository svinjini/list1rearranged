#include <iostream>


class List{
	public:
	struct node{
		  int value;
	      node * next;	
	      node(){value=0; next= nullptr; }
	};
	int count;
	node* head;
	node* tail;
	List();
	List(const List& obj);
	friend std::ostream & operator <<(std::ostream& out,const List& ob);
	List& operator +=(int x);
	~List();
	};
