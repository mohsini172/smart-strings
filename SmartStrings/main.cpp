#include<iostream>
#include "String.cpp"
#include "stringOP.cpp"
using namespace std;

int main(){
	stringOP temp;
	temp.append('F');
	stringOP another(temp);
	
	return 0;
}