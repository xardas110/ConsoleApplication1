
#include <iostream>
#include <Windows.h>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
	string name = "Ali";
	int age = 26;
	cout << "My name is: " << name << endl; 
	cout << "My age is: " << age << endl;
	const char* name1 = "Ali";
	constexpr char nameArr[] = "Ali";
	char buff[10];
	cout << "my name in integer values to char : " << (char)97 << (char)108 << (char)105 <<  endl;
	char nameInCharCodes[4];// { (char)97, (char)108, (char)105 };
	constexpr char a = (char)97;
	constexpr char l = (char)108;
	constexpr char i = (char)105;
	memcpy(nameInCharCodes, &a, 1);
	memcpy(nameInCharCodes+1, &l, 1);
	memcpy(nameInCharCodes+2, &i, 1);
	cout << "name in char codes: " << nameInCharCodes << endl;
	cout << "count of chararr: " << _countof(nameInCharCodes) << endl;
	cout << "My name arr: "<< nameArr << endl;
	printf("my name is: %s\n", name1);
	printf("my age is: %i\n", age);
	const char reqName[] = "Ali";
	if (memcmp(&reqName, &nameArr, 4) == 0)
		cout << "Correct name" << endl;

}

