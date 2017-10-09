#pragma once

class MyString
{
private:
	const char *mString;
public:
	MyString();              //Constructor
	MyString(char *string);  //Constructor
    int GetLength();         //Returns the numbers of characters stored in the string
	MyString ToUpper();      //Gives the string some uppercase letters
	MyString ToLower();      //Gives the string some lowercase letters
	bool CompareStrings(MyString &other);                       //Compares the strings together
	bool FindSubString(MyString subString, int index = 0);      //
	MyString ReplaceSubString();    //
	char AppendStrings();           //
	char PrependStrings();          //
};