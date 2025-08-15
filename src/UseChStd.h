#pragma once

#include"main.h"

enum class CastTest :unsigned char
{
	A,
	B,
	C
};

struct StructTest
{
	int num;
	char str[50];
	unsigned long value;
};

inline int mainFunction()
{
	//ChStd�͑S�̂ŗ��p����֗��@�\�����Ă��閼�O��Ԃł�//

	//EnumCast��enum�܂���enum class�̌p���N���X(CastTest�̏ꍇ��unsigned char)�̒l�����o���܂��B//
	auto&& castTestValue = ChStd::EnumCast(CastTest::A);

	//DecimalNumberToBaseNumber�͓��͂���10�i���̐��l��Ώۂ̐i��������֕ϊ����܂��B//
	//���̗�ł�8�i����char�^������֕ϊ����܂��B//
	auto&& number = ChStd::DecimalNumberToBaseNumber<char>(100, ChStd::OCTAL<char>());

	//MCopy��MZero�̓������̓��e���R�s�[�܂���0�ɂ��Ă����@�\�ł�//
	//���̗�ł�MZero��p���āA�l��S��0�ɂ��Ă��܂�//
	StructTest structTest;
	ChStd::MZero(&structTest);

	return 0;
}