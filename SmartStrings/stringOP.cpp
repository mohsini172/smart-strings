#include<iostream>
using namespace std;

class stringOP{
	private:
	char *buffer;
	int length;
public:
	stringOP(){
		buffer = NULL;
		length=0;
	}
	stringOP(stringOP& newString){
		this->buffer = new char[length];
		int len = newString.getLength();
		this->length=newString.getLength();
		for(int i=0;i < len;i++){
			this->buffer[i] = newString.getCharAt(i);
		}
		newString.clean();
	}
	stringOP(char* newString, int length) {
		this->buffer = new char[length];
		this->length = length;
		for(int i = 0; i < length; i++){
			buffer[i] = newString[i];
		}
		
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
	
	void clean(){
		delete[] this->buffer;
		this->buffer=NULL;
		this->length = 0;
	}
	
	~stringOP(){
		delete[] buffer;
	}
};