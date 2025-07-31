#pragma once
class Review
{
private:
	WordPad* pad;
public:
	Review(WordPad* pad);
	void Start(vector<int> numbers);
};