#pragma once
#include <iostream>
using std::ostream;

class MyString
{
	friend ostream& operator<<(ostream& os, MyString& str);
public:
	MyString();
	MyString(const char str[]);
	MyString(int length, char ch);
	MyString(const MyString& str);
	~MyString();

	int GetLength() { return mLength; }
	int FindFirstOccur(const char str[]);
	int FindFromIndex(const char str[], int index);
	
	char& operator[](const unsigned int index);
	MyString& operator=(const MyString& str);
	MyString& operator+=(const MyString& str);
private:
	char* mStr;
	int mLength;
};
