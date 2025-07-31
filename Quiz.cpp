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
		cout << "�����������������������������������������" << endl;
		cout << "�н��� �ܾ �����ϴ�.";
		cout << "�����������������������������������������" << endl;
		return;
	}

	system("cls");
	for (vector<int>::iterator i = numbers.begin(); i != numbers.end(); i++)
	{
		Word* current = pad->GetWord(*i);
		cout << "�����������������������������������������" << endl;
		cout <<"\t"<< current->GetSpelling() << endl;
		cout << "�����������������������������������������" << endl;
		string input = MyInput::input_string("���� �Է� : ");

		if (input == current->GetMeaning())
		{
			cout << "����!" << endl;
		}
		else
		{
			cout << "����!" << endl << "Ʋ�� ������ �����Ʈ�� �߰� �˴ϴ�."<<endl;
			pad->AddwrongWord(current);
		}
		system("pause");
		system("cls");
	}
}