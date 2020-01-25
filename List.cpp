#ifndef HEADER_INCLUDED
#include "List.h"
#define HEADER_INCLUDED

List::List(){
	   head=nullptr;
	   tail=nullptr;
	   count=0;
	}
List::List(const List& obj){
	    head=obj.head;
	    tail=obj.tail;
	    count=obj.count;
	}
List::~List(){
	   node* temp;
	   while(head!=nullptr){
		      temp=head->next;
			  delete head;
			  head=temp;
		   }
	}
std::ostream & operator <<(std::ostream& out,const List& ob){
	    List temp(ob);
	    for(int i=0; i<ob.count;++i){
			out<<temp.head->value<<std::endl;
			temp.head=temp.head->next;
		}
	    return out;
	}
List& List::operator +=(int x){
	   node* temp;
	   if (tail=nullptr){
		      temp->value=x;
		      tail=temp;
		      head->next=tail;
		      count++;
		   }
		   else{
			      temp=head;
			      head->next=temp;
			      head->value=x;
			      count++;
			 }
	}
#endif
