#pragma once

#include"main.h"

#define BIT_FLG_SIZE 3

inline int mainFunction()
{
	//Cumulative�͗ݐϘa�ƌĂ΂��A���S���Y�������{���邽�߂̃N���X�ł�//
	//����̕������󂯎��Ɖ��Z�A����̕������󂯎��ƌ��Z����悤�ɓ����܂�//
	//�R���X�g���N�^�̎��s���ɑ����������Z���邽�߂̕����A�����������Z���邽�߂̕����ł�//
	ChCpp::Cumulative<char> cumulative = ChCpp::Cumulative<char>('a','b');

	char const* testText = "accbcbcacccaaaccbca\0";
	size_t testLen = strlen(testText);

	for (size_t i = 0; i < testLen; i++)
	{
		cumulative.Update(testText[i]);
		std::cout << i << "�Ԗڎ��_�̐��l [" << cumulative.GetCount() << "]" << std::endl;
	}

	return 0;
}