#include <iostream>
#include "List.h"

int main(){
	List listok;
	  listok +=5;
	  listok +=-4;
	  listok +=7;
	  listok +=-8;
	  listok +=9;
	  listok +=100;
	  std::cout<<listok;
	  std::cout << std::endl;
	  listok.rearranged();
	  std::cout<<listok;
	  return 0;
	}
