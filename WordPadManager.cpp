#include "std.h"

WordPad* WordPadManager::find(string name)
{
	return this->pads[name];
}

void WordPadManager::AddPad(string name, WordPad* pad)
{
	this->pads.insert({ name, pad });
}

void WordPadManager::RemovePad(string name)
{
	WordPad* target = this->pads[name];
	delete target;
	this->pads.erase(name);
}

WordPad* WordPadManager::SelectPad(string name)
{
	map<string, WordPad*>::iterator itr = pads.find(name);
	if (itr == pads.end())
	{
		throw "없는 단어장입니다.";
	}

	return itr->second;
}

void WordPadManager::PrintAll()
{
	for (map<string, WordPad*>::iterator  i = pads.begin(); i != pads.end(); i++)
	{
		cout <<"\t" << i->first << endl;
	}
	cout << endl;
}