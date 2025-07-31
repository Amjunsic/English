#pragma once

class Controll
{
private:
	WordPadManager manager;
public:
	void Start();
	void Update();
	void End();
private:
	WordPad* Select();
	void TestRun();
	void ReviewRun();
	void Voca();
};
