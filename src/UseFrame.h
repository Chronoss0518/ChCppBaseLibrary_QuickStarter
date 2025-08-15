#pragma once

#include"main.h"

//�O�����Ƃ���BaseFrame���p�������N���X��p��
class TestFrame1 : public ChCpp::BaseFrame
{
public:

	void Update()override
	{
		system("cls");
		std::cout << "run frame1" << std::endl;

		//����Frame���Z�b�g����//
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

		//����Frame���Z�b�g����//
		ChangeFrame(0);
	}
};

inline int mainFunction()
{
	//BaseFrame�͊e�V�[�����ʂ��Ǘ����邽�߂̃N���X�ł�//

	//Frame���Ǘ�����I�u�W�F�N�g������//
	ChCpp::FrameList frameList;

	//���p����t���[�����Z�b�g//
	frameList.SetFrame<TestFrame1>();
	frameList.SetFrame<TestFrame2>();

	int num = 0;
	while (num != 'e' && num != 'E')
	{
		//Frame�̍X�V�y��Frame�̐؂�ւ������{//
		frameList.Update();
		num = getchar();
	}

	return 0;
}