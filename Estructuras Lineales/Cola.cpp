#include <iostream>
#include "List.h"

template <class T>
class Cola : protected List<T>
{
	void pushBack(int info){
		addInfoAtPos(info,this->getLenght()+1);
	}
	void popFront(){
		this->deleteAtPos(1);
	}
	int getFront(){
		this->getInfoWithPos(1);
	}
};