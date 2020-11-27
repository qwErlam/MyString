#include <iostream>
#include "MyString.h"


int main() {
	std::string str("b");
	str.append("1");
	
	char arr[] = "b";
	MyString a(1, 'a');
	//a("lol");
	a.test();
	//std::cout << "same" << std::endl;
	MyString b(str);
	b.test(); 
	MyString c = b + a;
	c.test();
	c = c + b;
	c.test();
	//char *arr = (char*)"lo";
	//MyString b(arr);
	return 0;
}