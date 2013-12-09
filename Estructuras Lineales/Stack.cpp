#include <iostream>
#include "List.h"


template <class T>
class Pila :  public List<T>
{
	public:
		void push(T info){
			this->addToPosition(info,1);
		}
		void pop(){
			this->deleteToPosition(1);
		}
		T tope(){
			return this->consultPos(1);
		}
		void printStack(){
			this->imprimirLog();
		}
		bool isEmptyStack(){
			return this->isEmpty();
		}
		
		Pila& operator=(Pila& asignador)
		{
			if (&asignador != this){
				this->deleteAll();
				for(int i=1;i<=asignador.getLenght();i++){
					this->addToPosition(asignador.consultPos(i),i);
				}
			}
			return *this;
		} 
};
