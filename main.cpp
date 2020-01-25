#include <iostream>
#include "List.h"

int main(){
	List::List listok;
	  listok+=5;
	  listok+=-4;
	  listok+=-1;
	  listok+=4;
	  listok+=5;
	  listok+=0;
	  std::cout<<listok;
	   return 0;
	}
