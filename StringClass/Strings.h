#pragma once

class MyString
{
private:
	const char *mString;
public:
	MyString();
	MyString(char *string);  
    int GetLength();      //Returns the numbers of characters stored in the string
	MyString ToUpper();    //Gives the string some uppercase letters
	MyString ToLower();    //Gives the string some lowercase letters
	bool CompareStrings(MyString &other);     //Compares the strings together
	MyString FindSubString(const char subString, int index = 0);
	MyString ReplaceSubString();
	char AppendStrings();
	char PrependStrings();

};