#include <iostream>
#include "String.cpp"
using namespace std;

class stringRL{
private:
	String *ptr;
	stringRL* next;
	stringRL* prevoius;
public:
	stringRL(){
		this->ptr = new String();
		this->next=this;
		this->prevoius=this;
	}
	stringRL(char* newString, int length){
		this->ptr = new String(newString,length);
		this->next = this;
		this->prevoius = this;
	}
	stringRL(stringRL& object){
		this->ptr = object.ptr;
		stringRL *tempPrev = object.prevoius;
		
		this->next = &object;
		object.prevoius = this;
		
		this->prevoius=object.prevoius;
		
	}
	~stringRL(){
		if(this->next==this || this->prevoius==this){
			delete ptr;
			ptr=NULL;
		}
		this->prevoius->next = this->next;
		this->next->prevoius = this->prevoius;
		delete ptr;
		ptr=NULL; 
	}
};