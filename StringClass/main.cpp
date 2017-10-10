#include <iostream>
#include "Strings.h"

int main()
{
	MyString testOne = "Johnny";
	MyString testTwo = "Bravo";
	MyString testThree = "Johnnyy";

	//bool result = testOne.CompareStrings(testTwo);
	//testOne.AppendStrings(testTwo);
	testOne.PrependStrings(testTwo);


	system("pause");
}