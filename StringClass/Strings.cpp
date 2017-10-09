#include <iostream>
#include <string>
#include "Strings.h"

MyString::MyString()
{
	mString = new char[255];
}

MyString::MyString(char *string)
{
	mString = string;
}

int MyString::GetLength()
{
	int i=0;                     //Gives "i" definition and a value to be passed in
 	while (mString[i] != '\0')     //Checks if the array in place of "i" in the array it checks to see is it the null char.
	{
		i+=1;	                   //Counts the place of "i" of an array by one time along the array until the '\0'.
	}
	return i;                      //Returns the places that was moved to up to the '\0' was reached.
}

MyString MyString::ToUpper()
{
	char *Upper = new char[255];                   
	for (int i = 0; i <= GetLength(); i++)        
	{
		if (mString[i] >= 97 && mString[i] <= 122) // checks to see if the character isnt in the desired case.
		{
			Upper[i] = mString[i] - 32;
		}
	}
	return  MyString();
}

MyString MyString::ToLower()
{
	char *Lower = new char[255];                  
	for (int i = 0; i <= GetLength(); i += 1)      
	{
		if (mString[i] >= 65 && mString[i] <= 90) // checks to see if the character isnt in the desired case.
		{
			Lower[i] = mString[i] + 32;
		}
	}
	return MyString();
}

bool MyString::CompareStrings(MyString &other) //compares values in two instances of the string
{
	if (this->GetLength() != other.GetLength())
	{
		return false;
	}
	for (int i = 0; i <= GetLength(); i++)
	{
		if (mString[i] != other.mString[i])
		{
			return false;
		}
	}
	return true;  
}

MyString MyString::FindSubString(const char subString,int index = 0)
{
	for (int i = 0; i <= GetLength(); i++)
	{
		int iter = 1;
		for (int j = 0; j <= GetLength(); i++)
		{
			int iter = 1;
		}
	}
	return MyString();
}

MyString MyString::ReplaceSubString()
{

	return MyString();
}

char MyString::AppendStrings()
{

	return 0;
}

char MyString::PrependStrings()
{

	return 0;
}



