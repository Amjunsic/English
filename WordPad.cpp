#include "std.h"

WordPad::WordPad(string name) :name(name)
{
	//myWords = new vector<Word*>();
	//wrongdWords = new vector<Word*>();
}
string WordPad::GetName() { return this->name; }

int WordPad::GetSize_Word() { return this->myWords.size(); }
int WordPad::GetSize_Wrong() { return this->wrongdWords.size(); }
Word* WordPad::GetWord(int index) { return this->myWords[index]; }
Word* WordPad::GetWord_Wrong(int index) { return this->wrongdWords[index]; }


void WordPad::AddWords(Word* word) { myWords.push_back(word); }
void WordPad::AddwrongWord(Word* word) { wrongdWords.push_back(word); }

vector<Word*>::iterator WordPad::RemoveWrongWord(Word* target)
{
	auto itr = find(wrongdWords.begin(), wrongdWords.end(), target);
	return wrongdWords.erase(itr);
}
vector<Word*>::iterator WordPad::RemoveWrongWord(int index)
{
	auto itr = wrongdWords.begin() + index;
	return wrongdWords.erase(itr);
}
#pragma region ETC
void WordPad::PrintAll()
{
	for (vector<Word*>::iterator i = myWords.begin(); i != myWords.end(); i++)
	{
		Word* current = *i;
		current->print();
	}
}
//vector<Word*>::iterator WordPad::findWord(string word, vector<Word*>* words)
//{
//	vector<Word*>::iterator itr;
//
//	itr = find_if(words->begin(), words->end(),
//		[word](Word* w)
//		{
//			return word == w->GetSpelling();
//		});
//
//	return itr;
//}
#pragma endregion




