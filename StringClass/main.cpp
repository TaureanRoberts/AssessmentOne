#include <iostream>
#include <string>
#include "Strings.h"

using namespace std;

int main()
{
	MyString testOne = "Johnny";
	MyString testTwo = "Bravo";
	MyString testThree = "Dexter";

	//bool result = testOne.CompareStrings(testTwo);
	//testOne.AppendStrings(testTwo);
	//testOne.PrependStrings(testTwo);
	//char a = testOne.GetIndex(2);
	int b = testOne.GetInput(2);
	istream& operator >> (istream& testOne, MyString &testTwo );
	system("pause");
}