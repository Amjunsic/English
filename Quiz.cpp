#include "std.h"

Quiz::Quiz(WordPad* pad)
{
	this->pad = pad;

	int size = pad->GetSize_Word();
	vector<int> numbers(size);
	iota(numbers.begin(), numbers.end(), 0);

	random_device rd;
	mt19937 g(rd());
	shuffle(numbers.begin(), numbers.end(), g);

	Start(numbers);
}

void Quiz::Start(vector<int> numbers)
{
	if (pad->GetSize_Word() <= 0)
	{
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "학습할 단어가 없습니다.";
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		return;
	}

	system("cls");
	for (vector<int>::iterator i = numbers.begin(); i != numbers.end(); i++)
	{
		Word* current = pad->GetWord(*i);
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout <<"\t"<< current->GetSpelling() << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		string input = MyInput::input_string("정답 입력 : ");

		if (input == current->GetMeaning())
		{
			cout << "정답!" << endl;
		}
		else
		{
			cout << "오답!" << endl << "틀린 문제는 오답노트에 추가 됩니다."<<endl;
			pad->AddwrongWord(current);
		}
		system("pause");
		system("cls");
	}
}