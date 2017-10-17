#pragma once
using namespace std;
class MyString
{
private:
	const char *mString;
public:
	//Default constructor
	MyString();
	//Constructor
	MyString(char *string);
	//Returns the numbers of characters stored in the string
    int GetLength();
	//Gives the string some uppercase letters
	MyString ToUpper();
	//Gives the string some lowercase letters
	MyString ToLower();
	//Compares the strings together
	bool CompareStrings(MyString &other);
	//Checks to see if the string has part of the info requested. ex: "min" is in "Gaming" true.
	bool FindSubString(MyString subString, int index = 0);
	//Takes part of the string and replaces that part with the new part- Bonus Part.
	MyString ReplaceSubString();
	//Takes two strings and places the first one together next to the second
	MyString AppendStrings(MyString aString);
	//Takes two strings and places the second string before the first string
	MyString PrependStrings(MyString aString);
	//Locates the place in memory where the current place in the string is stored
	char GetIndex(int place);
	//Gets user input and allows them to put it in the string
	friend istream &operator >> (istream &input, MyString &other);
};
