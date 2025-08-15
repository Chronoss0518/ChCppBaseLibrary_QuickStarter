#pragma once

#include"main.h"

#define BIT_FLG_SIZE 3

inline int mainFunction()
{
	//BitBoolは1bitを1フラグとして扱うためのクラスです//
	ChCpp::BitBool bitBool;

	//BitBoolは内部にvector<char>を保持しており、最初に何個のcharを利用するかも指定することができます//
	bitBool.SetSize(BIT_FLG_SIZE);

	//Setする際の値とGetする際の値はビットが考慮されているかいないかの差があるため注意が必要です//
	std::cout << "BitBool Size [" << bitBool.GetSize() << "]" << std::endl;

	//BitBoolには個別のフラグを操作する機能のほかに、全てのフラグをおろす機能もついています//

	bitBool.SetAllDownFlg();

	//以下は個別にbitを操作する機能になります//
	//以下の例ではbitBoolのサイズが3であるため、最大24個(0～23)のフラグを利用することができます//
	bitBool.SetBitFlg(10, true);

	if (bitBool.GetBitFlg(10))
		std::cout << "this Flg True" << std::endl;

	for (size_t i = 0; i < BIT_FLG_SIZE; i++)
	{
		std::cout << i << "番目の要素 [" << (int)bitBool.GetValue(i) << "]" << std::endl;
	}

	return 0;
}