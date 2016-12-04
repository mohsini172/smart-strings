#include<iostream>
using namespace std;
class String {
private:
	char *buffer;
	int length;
	int counter;
public:
	String(){
		buffer = NULL;
		length=0;
		this->counter = 1;
	}
	String(String& newString){
		int len = newString.getLength();
		this->buffer = new char[len];
		this->length=newString.getLength();
		for(int i=0;i < len;i++){
			this->buffer[i] = newString.getCharAt(i);
		}
		this->counter = 1;
	}
	
	String(String* newString){
		int len = newString->getLength();
		this->buffer = new char[len];
		this->length=newString->getLength();
		for(int i=0;i < len;i++){
			this->buffer[i] = newString->getCharAt(i);
		}
		this->counter = 1;
	}
	String(char* newString, int length) {
		this->buffer = new char[length];
		this->length = length;
		for(int i = 0; i < length; i++){
			buffer[i] = newString[i];
		}
		this->counter = 1;
		
	}
	int getCounter(){
		return counter;
	}
	void increamentCounter(){
		this->counter++;
	}
	void decreamentCounter(){
		this->counter--;
	}
	char getCharAt(int index){
		return buffer[index];
	}
	
	int getLength(){
		return this->length;
	}
	
	void append(char element){
		if(this->buffer==NULL);
		{
			this->buffer = new char[1];
			this->length = 1;
			this->buffer[0]=element;
			return;
		}
		char *temp = buffer;
		int len=getLength();
		buffer = new char[len+1];
		for(int i=0;i<len;i++){
			buffer[i]=temp[i];
		}
		buffer[len]=element;
		delete[] temp;
	}
	
	~String(){
		delete[] buffer;
	}
	
};