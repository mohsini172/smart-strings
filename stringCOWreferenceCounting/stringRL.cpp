#include<iostream>
#include "String.cpp"
using namespace std;
class stringRL{
private:
	String *ptr;
public:
	stringRL(){
		this->ptr = new String();
	}
	stringRL(char* newString, int length){
		this->ptr = new String(newString,length);
	}
	stringRL(stringRL& object){
		this->ptr = object.ptr;
		this->ptr->increamentCounter();
		
	}
	~stringRL(){
		this->ptr->decreamentCounter();
		if(ptr->getCounter()<=0)
			delete ptr;
	}
	void append(char element){
		String *temp = new String(this->ptr);
		temp->append(element);
		ptr->decreamentCounter();
		this->ptr= temp;
		
		
	}
};
//int stringRL::counter=0;