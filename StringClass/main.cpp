#include <iostream>
#include <string>
#include "Strings.h"

using namespace std;

int main()
{
	MyString testOne = "Johnny";
	cin >> testOne;
	MyString testTwo = "Bravo";
	cin >> testTwo;
	MyString testThree = "Dexter";
	cin >> testThree;

	//bool result = testOne.CompareStrings(testTwo);
	//testOne.AppendStrings(testTwo);
	//testOne.PrependStrings(testTwo);
	//char a = testOne.GetIndex(2);
	//int b = testOne.GetInput(2);
	istream &operator >> (istream &testOne, MyString &testThree);

	system("pause");
}
