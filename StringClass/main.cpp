#include <iostream>
#include "Strings.h"
#include <assert.h>
#include <string>
#include <fstream>

using namespace std;

int main()
{   
	MyString *test1 = new MyString("Baseball");
	MyString *test2 = new MyString("Gadget");
	assert(test1->GetLength() == 8); 
	assert(test1->ToUpper().CompareStrings(MyString("BASEBALL")) == true);
	assert(test1->ToLower().CompareStrings(MyString("baseball")) == true);
	assert(test1->PrependStrings("Bat").CompareStrings(MyString("BatBaseball")) == true);
	assert(test1->AppendStrings("Cat").CompareStrings(MyString("BaseballCat")) == true);
	assert(test1->GetIndex(2) == 's');
	assert(test1->FindSubString("seba") == true);

	system("pause");
}