#pragma once
using namespace std;
class MyString
{
private:
	const char *mString;
	//Prototype: const char *mString;
	//Description: Custom String class structure
	//Arguements: N/A
	//PreCondition: Used to give the string a place.
	//PostCondition: Connects the functions together.
	//Protection Level: Private
public:
	MyString();
	//Prototype: MyString MyString.
	//Description: A String with a default mString is created.
    //Arguments: N/A
	//Precondition : N/A
	//Postcondition : A default String is created.
	//Protection Level: Public

	MyString(char *string);
	//Prototype: Mystring Mystring(char *string)
	//Description: A MyString constructor with a arguement pointing to the constant char.
	//Arguements: Takes in a char with a pointer to mString.
	//PreCondition: N/A
	//PostCondition: A string is being assigned to a varible.
	//Protection Level: Public

    int GetLength();
	//Prototype: int GetLength();
    //Description: Returns the numbers of characters stored in the string
	//Arguements: N/A
	//Preconditions: Makes a new string long until it hits the end term character. '\0'
	//PostConditions: Gives a pre determined length base on the size of the string.
	//Protection Level: Public

	
	MyString ToUpper();
	//Prototype: MyString ToUpper();
	//Description: Gives the string some uppercase letters
	//Arguements: N/A
	//PreCondition: A string with non unified casing.
	//PostCondition: All the casing in the string is uppercased
	//Protection Level: Public

	MyString ToLower();
	//Prototype: MyString ToLower();
	//Description:Gives the string some lowercase letters
	//Arguements: N/A
	//PreCondition: A string with non unified casing.
    //Postcondition: All the casing in the string is lowercased. 
	//Protection Level: Public

	bool CompareStrings(MyString &other);
	//Prototype: bool CompareStrings(MyString &other);
	//Description: Compares the strings together
	//Arguements: N/A
	//PreCondition: Takes two strings and checks to see if they are the same length and have the same characters.
	//PostCondition: Returns true when the two strings are the same length and characters.
	//Protection Level: Public

	bool FindSubString(MyString subString, int index = 0);
	//Prototype: bool FindSubString(MyString subString, int index = 0);
	//Description: Checks to see if the string has part of the info requested. ex: "min" is in "Gaming" true.
	//Arguements: A subString of type MyString and a index of the type int that is set on default 0
	//PreCondition: Takes a second string and compares to see if each character is the same in that order.
	//PostCondition: Returns true if the substring matches. If not it breaks.
	//Protection Level: Public

	MyString ReplaceSubString();
	//Prototype: MyString ReplaceSubString();
	//Description: Takes part of the string and replaces that part with the new part- Bonus Part
	//Arguements: N/A
	//PreCondition: N/A
	//PostCondition: N/A
	//Protection Level: Public

	MyString AppendStrings(MyString aString);
	//Prototype: MyString AppendStrings(MyString aString);
    //Description: Takes two strings and places the first one together next to the second.
	//Arguement: Takes in a MyString called aString.
	//PreCondition: Takes the first string and puts it behind the second string.
	//PostCondition: Merges the two strings in the opposite order
	//Protection Level: Public
	
	MyString PrependStrings(MyString aString);
	//Prototype: MyString PrependStrings(MyString aString);
    //Description: Takes two strings and places the second string before the first string.
	//Arguements: Takes in a MyString called aString.
	//PreCondition: Takes the second string and puts it in front the other
	//PostCondition: Merges the two strings in the opposite order
	//Protection Level: Public

	char GetIndex(int place);
	//Prototype: char Getindex(int place);
    //Description: Finds the strings position in the argument passed in.
	//Arguments: An int taking the place of origin in the string
	//Precondition: A string.
	//Postcondition: The character at the point in the string is returned.
	//Protection Level: Public

	friend istream &operator >> (istream &input, MyString &other);
	//Prototype: friend istream &operator >> (istream &input, MyString &other);
	//Description: Gets user input and allows them to put it in the string
	//Arguements: What the string is getting changed too.
	//Precondition: User inputs a string to be tested
	//PostCondition: Program will run smoothly if it passes all the tests
	//Protection Level: Public
};
