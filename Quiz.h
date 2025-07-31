#pragma once
class Quiz
{
private:
	WordPad* pad;
public:
	Quiz(WordPad* pad);
	void Start(vector<int> numbers);
};
