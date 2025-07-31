//프로그램 흐름 처리
#include "std.h"

#pragma region Flow
void Controll::Start()
{
	Print::Logo();
	manager = WordPadManager();
	File::Load(manager);
}
void Controll::Update()
{
	while (true)
	{
		system("cls");
		Print::Menu();
		int input = MyInput::input_integer("");
		switch (input)
		{
			case 1: TestRun(); break;
			case 2: ReviewRun(); break;
			case 3: Voca(); break;
			//case '4': pcon->remove(); break;
			//case '5': pcon->file_save(); break;
			//case '6': pcon->file_save(); break;
			case 4: return;  //함수를 종료
		}
		system("pause");
	}
}
void Controll::End()
{

}
#pragma endregion
#pragma region Feature
WordPad* Controll::Select()
{
	while (true)
	{
		try
		{
			system("cls");
			cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			manager.PrintAll();
			cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			string input = MyInput::input_string("\t학습할 단어장 선택 : ");
			return manager.SelectPad(input);
		}
		catch (const char* msg)
		{
			cout << msg << endl;
			cout << "다시 입력해주세요." << endl;
			system("pause");
		}
	}
}
void Controll::TestRun()
{
	Quiz quiz(Select());
}
void Controll::ReviewRun()
{
	Review review(Select());
}
void Controll::Voca()
{
	Select()->PrintAll();
}

#pragma endregion


