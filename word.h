#pragma once
#include "std.h"

class Word
{
private:
	string spelling;
	string meaning;
public:
	Word(string spelling, string meaning) : spelling(spelling), meaning(meaning) {}
	string GetSpelling();
	string GetMeaning();
	void print();
};
