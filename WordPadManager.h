#pragma once
class WordPadManager
{
private:
	map<string, WordPad*> pads;
	WordPad* find(string name);
public:
	void AddPad(string name, WordPad*);
	void RemovePad(string name);
	WordPad* SelectPad(string name);
	void PrintAll();
};
