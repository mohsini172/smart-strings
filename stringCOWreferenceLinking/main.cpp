#include <iostream>
#include "stringRL.cpp"
using namespace std;

int main(int argc, char **argv)
{
	stringRL temp("test", 4);
	stringRL another(temp);
	stringRL onceMore(another);
	onceMore.append('a');
	onceMore.print();
	
	getchar();
	return 0;
}
