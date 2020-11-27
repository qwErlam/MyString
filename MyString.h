#pragma once
#include <iostream>


class MyString {
private:
	int value;

	// string elem
	struct lst {
		char value;
		int num;
		struct lst* pNext;
	};

	struct StrElem {
		int leigth;
		struct lst* list;
		struct lst* pEnd;
	}*str = 0;

public:
	MyString();							// default constructor
	MyString(const MyString& copy_str);	//copy constructor
	MyString(std::string string_value);				// std::string constructor
	MyString(char arr[]);				// char array constructor
	MyString(const char arr[]);			//MyString a("lol");
	MyString(char arr[], int count);	// init class with count characters of  “char string”,Constructor(“hello”, 4) -> “hell”
	MyString(const char arr[], int count);
	MyString(int count, char arr);		// init class with count of characters Constructor(4, ‘a’)->“aaa”
	/*!!!*/MyString(const char* list[]);		// initializer list constructor 
	
	MyString operator+ (MyString val_1) {
		MyString res(*this);
		struct lst* tmp_list_1 = res.str->pEnd;
		struct lst* tmp_list_2 = val_1.str->list;
		for (int tmp_cnt = res.str->leigth; tmp_cnt < res.str->leigth + val_1.str->leigth; ++tmp_cnt) {
			tmp_list_1->value = tmp_list_2->value;
			tmp_list_1->num = tmp_cnt;
			tmp_list_1->pNext = new lst();
			if (tmp_cnt == res.str->leigth + val_1.str->leigth - 1)res.str->pEnd = tmp_list_1->pNext;
			tmp_list_1 = tmp_list_1->pNext;
			tmp_list_2 = tmp_list_2->pNext;
		}
		res.str->leigth += val_1.str->leigth;
		return res;
	}
	MyString operator+ (char arr[]);


	~MyString();
	void test();




};

