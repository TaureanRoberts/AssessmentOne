#include <iostream>
#include "Strings.h"

int main()
{
	MyString testOne = "Johnny";
	MyString testTwo = "Johnny";
	MyString testThree = "Johnnyy";

	bool result = testOne.CompareStrings(testThree);

	system("pause");
}