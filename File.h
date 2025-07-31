#pragma once
class File
{
private:
	static vector<fs::path> getCsvFiles();
public:
	static void Load(WordPadManager& mananger);
};
