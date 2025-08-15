#pragma once

#include"main.h"

//前準備としてBaseFrameを継承したクラスを用意
class TestFrame1 : public ChCpp::BaseFrame
{
public:

	void Update()override
	{
		system("cls");
		std::cout << "run frame1" << std::endl;

		//次のFrameをセットする//
		ChangeFrame(1);
	}
};

class TestFrame2 : public ChCpp::BaseFrame
{
public:

	void Update()override
	{
		system("cls");
		std::cout << "run frame2" << std::endl;

		//次のFrameをセットする//
		ChangeFrame(0);
	}
};

inline int mainFunction()
{
	//BaseFrameは各シーンや画面を管理するためのクラスです//

	//Frameを管理するオブジェクトを準備//
	ChCpp::FrameList frameList;

	//利用するフレームをセット//
	frameList.SetFrame<TestFrame1>();
	frameList.SetFrame<TestFrame2>();

	int num = 0;
	while (num != 'e' && num != 'E')
	{
		//Frameの更新及びFrameの切り替えを実施//
		frameList.Update();
		num = getchar();
	}

	return 0;
}