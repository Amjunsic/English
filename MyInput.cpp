#include "std.h"

int MyInput::input_integer(string msg)
{
	cout << msg;

	int value;
	cin >> value;
	return value;
}

float MyInput::input_float(string msg)
{
	cout << msg;

	float value;
	cin >> value;
	return value;
}

char MyInput::input_char(string msg)
{
	cout << msg;

	char value;
	cin >> value;
	return value;
}

string MyInput::input_string(string msg)
{
	cout << msg;

	string value;
	cin >> value;
	return value;
}