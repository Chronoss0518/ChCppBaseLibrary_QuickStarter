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
	//ChStdは全体で利用する便利機能を入れている名前空間です//

	//EnumCastはenumまたはenum classの継承クラス(CastTestの場合はunsigned char)の値を取り出します。//
	auto&& castTestValue = ChStd::EnumCast(CastTest::A);
	
	std::cout << (int)castTestValue << std::endl;

	//DecimalNumberToBaseNumberは入力した10進数の数値を対象の進数文字列へ変換します。//
	//この例では8進数のchar型文字列へ変換します。//
	auto&& number = ChStd::DecimalNumberToBaseNumber<char>(100, ChStd::OCTAL<char>());

	std::cout << number << std::endl;

	//MCopyやMZeroはメモリの内容をコピーまたは0にしてくれる機能です//
	//この例ではMZeroを用いて、値を全て0にしています//
	StructTest structTest;
	ChStd::MZero(&structTest);

	std::cout <<"num [" << structTest.num << "]" << std::endl;
	std::cout <<"str [" << structTest.str << "]" << std::endl;
	std::cout <<"value [" << structTest.value << "]" << std::endl;

	return 0;
}