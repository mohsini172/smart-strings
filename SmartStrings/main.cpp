#include<iostream>
#include "String.cpp"
#include "stringOP.cpp"
using namespace std;

int main(){
	
	//====]]]]]]]]]]------Test for cpoied Pointers------[[[[[[=========//
	cout<<"----------------------------Test for Copied pointer----------------------------------"<<endl;
	String test1("Test String",11);
	String test11(test1);
	cout<<"Object 1 value: ";
	for(int i=0;i<test1.getLength();i++){
		cout<<test1.getCharAt(i);
	}
	cout<<"\nObject 2 value after copying: ";
	for(int i=0;i<test1.getLength();i++){
		cout<<test1.getCharAt(i);
	}
	for(int i=0;i<test1.getLength();i++){
		if(test1.getCharAt(i)!=test11.getCharAt(i)){
			break;
			cout<<"Test1 failed"<<endl;
			return 1;
		}
	}
	cout<<"\nTest1 passed"<<endl;
	test1.append('a');
	if(test1.getCharAt(11)!='a'){
		cout<<"Test2 failed"<<endl;
		return 1;
	}
	cout<<"Test2 passed"<<endl;
	
	//------------Test owned pointers----------------//
	cout<<"---------------------------Test for Owned pointer---------------------------"<<endl;
	stringOP test("Test",4);
	cout<<"Value present in test:"<<endl;
	test.print();
	stringOP another(test);
	cout << "\nafter shifting ownership value of test is:"<<endl;
	test.print();
	cout<<"\nand value of second object is:"<<endl;
	another.print();
	if(test.getLength()==0){
		cout<<"\nTest passed"<<endl;
	}
	return 0;
}