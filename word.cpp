#include "std.h"

string Word::GetSpelling()
{
	return this->spelling;
}

string Word::GetMeaning()
{
	return this->meaning;
}

void Word::print()
{
	cout << this->spelling << "\t"<< this->meaning << endl;
	
}