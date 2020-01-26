#ifndef HEADER_INCLUDED
#include "List.h"
#define HEADER_INCLUDED

List::List() {
	head = 0;
	count = 0;
}
void List::rearranged() {
	if (!head) {
		return;
	}
	node* old_head = head;
	node* current = head->next;
	node* prev = head;
	while (current) {
		old_head = head;
		if (current->value < 0) {
			head = current;
			prev->next = current->next;
			current->next = old_head;
			current = prev->next;
		} else {
			prev = current;
			current = current->next;
		}
	}
}
List::~List() {
	node* temp=head;
	while (temp->next!= nullptr) {
		temp = head->next;
		deleteNode(head);
		head = temp;
	}
}
void List::deleteNode(node* a) {
	delete (a);
}
std::ostream& operator <<(std::ostream& out, List& ob) {
	node* temp = ob.head;
	while (temp) {
		out << temp->value << std::endl;
		temp = temp->next;
	}
	return out;
}
List& List::operator +=(int x){
	node* temp;
	if (count == 0) {
		head = new node();
		head->value = x;
		count++;
	}
	else {
		temp = head;
		head=new node();
		head->value = x;
		head->next = temp;
		count++;
	}
	return *this;
}
#endif
