#pragma once

#include"main.h"

#define BIT_FLG_SIZE 3

inline int mainFunction()
{
	//File��Binary�ł͂Ȃ�Text�𑀍삷�邽�߂̃N���X�ł�//
	ChCpp::File<char> file;

	//File�͊�{�I�Ɉ�x�J���Ɠ��e��ێ�����悤�ɓ����܂�//
	//��������_isUpdate��true�ɂ���ƁAFileClose���ɕێ����Ă�����e�Ńt�@�C�����X�V���܂�//
	file.FileOpen("Test.txt", true);

	//FileReade�͓ǂ݂��������e�̎擾�AFileWrite�͓��e�̏������݂ɂȂ�܂�//
	file.FileWrite("Test Text");

	//�Ō��FileClose�����ĕʂ̃t�@�C�����J����悤�ɂ��܂�//
	file.FileClose();

	//�e�L�X�g�t�@�C���𑀍삷��ꍇ�͏�L�̗��p���@�ƂȂ�A�ȉ��̓o�C�i���𑀍삷�邽�߂̃t�@�C���ɂȂ�܂�//
	ChCpp::BinaryFile binary;

	return 0;
}