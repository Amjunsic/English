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
		cout << "�����������������������������������������" << endl;
		cout << "\t�н��� �ܾ �����ϴ�."<<endl;
		cout << "�����������������������������������������" << endl;
		return;
	}
	for (int i = 0; i < pad->GetSize_Wrong(); i++)
	{
		
	}
	for (vector<int>::iterator i = numbers.begin(); i != numbers.end();i++)
	{
		Word* current = pad->GetWord_Wrong(*i);
		cout << "�����������������������������������������" << endl;
		cout << "\t" << current->GetSpelling() << endl;
		cout << "�����������������������������������������" << endl;
		string input = MyInput::input_string("���� �Է� : ");

		if (input == current->GetMeaning())
		{
			cout << "����!" << endl;
			pad->RemoveWrongWord(current);
		}
		else
		{
			cout << "����!" << endl;
		}
		system("pause");
		system("cls");
	}
}