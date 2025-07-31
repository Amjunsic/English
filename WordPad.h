#pragma once

class WordPad
{
private:
	string name;
	vector<Word*> myWords; //전체 단어
	vector<Word*> wrongdWords; //틀린 단어들

public:
	WordPad(string name);
	string GetName();
	int GetSize_Word();
	int GetSize_Wrong();
	Word* GetWord(int index);
	Word* GetWord_Wrong(int index);
public:
	void AddWords(Word* word);
	void AddwrongWord(Word* word);
	vector<Word*>::iterator RemoveWrongWord(Word* target);
	vector<Word*>::iterator RemoveWrongWord(int index);
public:
	void PrintAll();
	//vector<Word*>::iterator findWord(string spelling, vector<Word*>*);
};