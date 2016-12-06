#include <iostream>
#include "stringRL.cpp"
using namespace std;

int main(int argc, char **argv)
{
	stringRL ucme("test",4);
	stringRL nowucme(ucme);
	for(int i=0;i<ucme.length();i++){
		if(ucme.getCharAt(i)!=nowucme.getCharAt(i)){
			cout<<"Test one failed"<<endl;
			return 1;
		}
	}
	cout << "Test1 Passed"<<endl;
	nowucme.append('I');
	if(nowucme.getCharAt(4)!='I'){
		cout<<"Test2 failed"<<endl;
		return 1;
	}
	cout<<"Test2 passed"<<endl;
	if(ucme.getPtr()==nowucme.getPtr()){
		cout<<"Test3 failed"<<endl;
		return 1;
	}
	cout<<"Test3 passed"<<endl;
	stringRL test(nowucme);
	if(nowucme.getPtr()!=test.getPtr()){
		cout<<"Test4 failed"<<endl;
	}
	cout<<"Test4 passed"<<endl;
	return 0;
}
