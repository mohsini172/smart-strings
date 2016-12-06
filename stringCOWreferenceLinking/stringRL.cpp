#include <iostream>
#include "String.cpp"
using namespace std;

class stringRL{
private:
	String *ptr;
	stringRL* next;
	stringRL* prevoius;
	stringRL* head;
public:
	int counter;
	stringRL(){
		this->ptr = new String();
		
		this->next=this;
		this->prevoius=this;
		this->head = this;
	}
	stringRL(char* newString, int length){
		this->ptr = new String(newString,length);
		this->next = this;
		this->prevoius = this;
		this->head = this;
		counter = 0;
	}
	stringRL(stringRL& object){
		this->counter = object.counter + 1;
		this->ptr = object.ptr;
		stringRL *tempPrev = object.prevoius;
		
		this->next = &object;
		object.prevoius = this;
		
		this->prevoius=tempPrev;
		tempPrev->next = this;
		
	}
	int length(){
		return ptr->getLength();
	}
	char getCharAt(int index){
		return ptr->getCharAt(index);
	}
	String* getPtr() const{
		return ptr;
	}
	void append(char element){
		this->prevoius->next = this->next;
		this->next->prevoius = this->prevoius;
		
		String *temp = new String(this->ptr);
		temp->append(element);
		this->ptr = temp;
		
	}
	void print(){
		this->ptr->print();
	}
	~stringRL(){
		if(this->next==this || this->prevoius==this){
			delete ptr;
			ptr=NULL;
		}
		this->prevoius->next = this->next;
		this->next->prevoius = this->prevoius;
		
	}
};
