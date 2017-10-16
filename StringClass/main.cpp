#include <iostream>
#include "Strings.h"
#include <assert.h>
#include <string>

using namespace std;

int main()
{
	MyString *test1 = new MyString("Baseball");
	assert(test1->GetLength() == 8); 
	assert(test1->ToUpper().CompareStrings(MyString("BASEBALL")) == true);
	assert(test1->ToLower().CompareStrings(MyString("baseball")) == true);
	assert(test1->PrependStrings("Bat").CompareStrings(MyString("BatBaseball")) == true);
	assert(test1->AppendStrings("Cat").CompareStrings(MyString("BaseballCat")) == true);
	assert(test1->GetIndex().FindSubString(MyString("Baseball")) == true);


	system("pause");
}