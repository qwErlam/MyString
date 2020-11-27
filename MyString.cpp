//#ifndef MyString_HEADER
//#define MyString_HEADER
#include "MyString.h"
#include <iostream>
#include <cstring>

MyString::MyString() {
	str = new StrElem();
	str->leigth = 0;
	str->list = new lst();
	str->pEnd = new lst();

	//MyString::
	value = 1;
	//std::cout << "test" << std::endl;
}

//MyString::MyString()

MyString::MyString(char arr[]) {
	if (str == 0) {
		str = new StrElem();
		str->leigth = 0;
		str->list = new lst();
		str->pEnd = new lst();
	}
	lst* tmp_list;
	if (str->leigth == 0) {
		tmp_list = str->list;
		for (int count = 0; count < strlen(arr); ++count, ++str->leigth) {
			tmp_list->value = arr[count];
			tmp_list->num = count;
			tmp_list->pNext = new lst();
			if (count == strlen(arr)-1)str->pEnd = tmp_list->pNext;//-1
			tmp_list = tmp_list->pNext;
			//last seen
		}
	}
	//else {
	//	tmp_list = str->pEnd;
	//	for (int count = 0; count < strlen(arr) + str->leigth; ++count, ++str->leigth) {
	//		tmp_list->value = arr[count];
	//		tmp_list->num = count;
	//		tmp_list->pNext = new lst();
	//		if (count == strlen(arr))str->pEnd = tmp_list;//-1
	//		tmp_list = tmp_list->pNext;
	//		//last seen
	//	}
	//}
}

MyString::MyString(const char arr[]) {
	if (str == 0) {
		str = new StrElem();
		str->leigth = 0;
		str->list = new lst();
		str->pEnd = new lst();
	}
	lst* tmp_list;
	if (str->leigth == 0) {
		tmp_list = str->list;
		for (int count = 0; count < strlen(arr); ++count, ++str->leigth) {
			tmp_list->value = arr[count];
			tmp_list->num = count;
			tmp_list->pNext = new lst();
			if (count == strlen(arr)-1)str->pEnd = tmp_list->pNext;//-1
			tmp_list = tmp_list->pNext;
			//last seen
		}
	}
	//else {
	//	tmp_list = str->pEnd;
	//	for (int count = 0; count < strlen(arr) + str->leigth; ++count, ++str->leigth) {
	//		tmp_list->value = arr[count];
	//		tmp_list->num = count;
	//		tmp_list->pNext = new lst();
	//		if (count == strlen(arr))str->pEnd = tmp_list;//-1
	//		tmp_list = tmp_list->pNext;
	//		//last seen
	//	}
	//}
}

MyString::MyString(char arr[], int count) {
	if (str == 0) {
		str = new StrElem();
		str->leigth = 0;
		str->list = new lst();
		str->pEnd = new lst();
	}
	lst* tmp_list;
	if (str->leigth == 0) {
		//if count>strlen(arr)			!!!
		tmp_list = str->list;
		for (int tmp_count = 0; tmp_count < count; ++tmp_count, ++str->leigth) {
			tmp_list->value = arr[tmp_count];
			tmp_list->num = tmp_count;
			tmp_list->pNext = new lst();
			if (tmp_count == count-1)str->pEnd = tmp_list->pNext;//-1
			tmp_list = tmp_list->pNext;
			//last seen
		}
	}
}

MyString::MyString(const char arr[], int count) {
	if (str == 0) {
		str = new StrElem();
		str->leigth = 0;
		str->list = new lst();
		str->pEnd = new lst();
	}
	lst* tmp_list;
	if (str->leigth == 0) {
		//if count>strlen(arr)			!!!
		tmp_list = str->list;
		for (int tmp_count = 0; tmp_count < count; ++tmp_count, ++str->leigth) {
			tmp_list->value = arr[tmp_count];
			tmp_list->num = tmp_count;
			tmp_list->pNext = new lst();
			if (tmp_count == count-1)str->pEnd = tmp_list->pNext;//-1
			tmp_list = tmp_list->pNext;
			//last seen
		}
	}
}

MyString::MyString(int count, char arr) {
	if (str == 0) {
		str = new StrElem();
		str->leigth = 0;
		str->list = new lst();
		str->pEnd = new lst();
	}
	lst* tmp_list;
	if (str->leigth == 0) {
		//if count>strlen(arr)			!!!
		tmp_list = str->list;
		for (int tmp_count = 0; tmp_count < count; ++tmp_count, ++str->leigth) {
			tmp_list->value = arr;
			tmp_list->num = tmp_count;
			tmp_list->pNext = new lst();
			if (tmp_count == count-1)str->pEnd = tmp_list->pNext;//-1
			tmp_list = tmp_list->pNext;
			//last seen
		}
	}
}

MyString::MyString(const MyString& copy_str) {
	if (str == 0) {
		str = new StrElem();
		str->leigth = 0;
		str->list = new lst();
		str->pEnd = new lst();
	}
	lst* tmp_list_1;
	lst* tmp_list_2 = copy_str.str->list;
	if (str->leigth == 0) {
		tmp_list_1 = str->list;
		for (int count = 0; count < copy_str.str->leigth; ++count, ++str->leigth) {
			tmp_list_1->value = tmp_list_2->value;
			tmp_list_1->num = count;
			tmp_list_1->pNext = new lst();
			if (count == copy_str.str->leigth - 1)str->pEnd = tmp_list_1->pNext;
			tmp_list_1 = tmp_list_1->pNext;
			tmp_list_2 = tmp_list_2->pNext;
			//last seen
		}
	}
}

MyString::MyString(std::string string_value) {
	int count = string_value.length() - 1;

	if (str == 0) {
		str = new StrElem();
		str->leigth = 0;
		str->list = new lst();
		str->pEnd = new lst();
	}
	lst* tmp_list;
	if (str->leigth == 0) {
		//if count>strlen(arr)			!!!
		tmp_list = str->list;
		for (int tmp_count = 0; tmp_count < count; ++tmp_count, ++str->leigth) {
			tmp_list->value = string_value.c_str()[tmp_count];
			tmp_list->num = tmp_count;
			tmp_list->pNext = new lst();
			if (tmp_count == count-1)str->pEnd = tmp_list->pNext;//-1
			tmp_list = tmp_list->pNext;
			//last seen
		}
	}
}

MyString::~MyString() {

}
//
//MyString::MyString operator+(MyString val_2) {
//
//
//}

void MyString::test() {
	lst* tmp_list = str->list;
	for (int count = 0; count < str->leigth; ++count, tmp_list = tmp_list->pNext)
		std::cout << tmp_list->value;
	std::cout << std::endl<<str->leigth<<std::endl;
	//std::cout << "test" << std::endl;
	//std::cout << std::endl << str->pEnd->value;
}

//#endif