#pragma once

#include"main.h"

#define BIT_FLG_SIZE 3

inline int mainFunction()
{
	//BitBool��1bit��1�t���O�Ƃ��Ĉ������߂̃N���X�ł�//
	ChCpp::BitBool bitBool;

	//BitBool�͓�����vector<char>��ێ����Ă���A�ŏ��ɉ���char�𗘗p���邩���w�肷�邱�Ƃ��ł��܂�//
	bitBool.SetSize(BIT_FLG_SIZE);

	//Set����ۂ̒l��Get����ۂ̒l�̓r�b�g���l������Ă��邩���Ȃ����̍������邽�ߒ��ӂ��K�v�ł�//
	std::cout << "BitBool Size [" << bitBool.GetSize() << "]" << std::endl;

	//BitBool�ɂ͌ʂ̃t���O�𑀍삷��@�\�̂ق��ɁA�S�Ẵt���O�����낷�@�\�����Ă��܂�//

	bitBool.SetAllDownFlg();

	//�ȉ��͌ʂ�bit�𑀍삷��@�\�ɂȂ�܂�//
	//�ȉ��̗�ł�bitBool�̃T�C�Y��3�ł��邽�߁A�ő�24��(0�`23)�̃t���O�𗘗p���邱�Ƃ��ł��܂�//
	bitBool.SetBitFlg(10, true);

	if (bitBool.GetBitFlg(10))
		std::cout << "this Flg True" << std::endl;

	for (size_t i = 0; i < BIT_FLG_SIZE; i++)
	{
		std::cout << i << "�Ԗڂ̗v�f [" << (int)bitBool.GetValue(i) << "]" << std::endl;
	}

	return 0;
}