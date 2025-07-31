#include "std.h"

Review::Review(WordPad* pad)
{
	this->pad = pad;

	int size = pad->GetSize_Wrong();
	vector<int> numbers(size);
	iota(numbers.begin(), numbers.end(), 0);

	random_device rd;
	mt19937 g(rd());
	shuffle(numbers.begin(), numbers.end(), g);

	Start(numbers);
}

void Review::Start(vector<int> numbers)
{
	system("cls");
	if (pad->GetSize_Wrong() <= 0)
	{
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "\t학습할 단어가 없습니다."<<endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		return;
	}
	for (int i = 0; i < pad->GetSize_Wrong(); i++)
	{
		
	}
	for (vector<int>::iterator i = numbers.begin(); i != numbers.end();i++)
	{
		Word* current = pad->GetWord_Wrong(*i);
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "\t" << current->GetSpelling() << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		string input = MyInput::input_string("정답 입력 : ");

		if (input == current->GetMeaning())
		{
			cout << "정답!" << endl;
			pad->RemoveWrongWord(current);
		}
		else
		{
			cout << "오답!" << endl;
		}
		system("pause");
		system("cls");
	}
}