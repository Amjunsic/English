#include "std.h"

vector<fs::path> File::getCsvFiles()
{
	vector<fs::path> result;
	try
	{
		//폴더 존재유무 확인 없으면 생성
		if (!fs::exists(PATH))
		{
			fs::create_directory(PATH);
		}

		for (const auto& entry : fs::directory_iterator(PATH))
		{
			result.push_back(entry.path());
			//폴더 순회하며 csv파일 탐색
			/*if (entry.is_regular_file() && entry.path().extension() == ".csv")
			{
				result.push_back(entry.path());
			}*/
		}
	}
	catch (const fs::filesystem_error& e)
	{

	}
	return result;
}

void File::Load(WordPadManager& mananger)
{
	vector<fs::path> paths = getCsvFiles();

	for (const auto path : paths )
	{
		WordPad* pad = new WordPad(path.filename().string());

		ifstream stream(path);
		string line;

		while (getline(stream, line))
		{
			stringstream ss(line);
			string spelling, meaning;
			getline(ss, spelling, ',');
			getline(ss, meaning, ',');

			pad->AddWords(new Word(spelling, meaning));
		}
		
		mananger.AddPad(path.filename().string(), pad);
		stream.close();
	}
	
}