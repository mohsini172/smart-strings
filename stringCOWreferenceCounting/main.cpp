#include <stdio.h>
#include "stringRL.cpp"
int main(int argc, char **argv)
{
	
	stringRL ucme("fuck",4);
	stringRL nowucme(ucme);
	nowucme.append('I');
	
	return 0;
}
