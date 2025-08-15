#pragma once

#include"main.h"

#define BIT_FLG_SIZE 3

inline int mainFunction()
{
	//Cumulativeは累積和と呼ばれるアルゴリズムを実施するためのクラスです//
	//特定の文字を受け取ると加算、特定の文字を受け取ると減算するように動きます//
	//コンストラクタの実行時に第一引数が加算するための文字、第二引数が減算するための文字です//
	ChCpp::Cumulative<char> cumulative = ChCpp::Cumulative<char>('a','b');

	char const* testText = "accbcbcacccaaaccbca\0";
	size_t testLen = strlen(testText);

	for (size_t i = 0; i < testLen; i++)
	{
		cumulative.Update(testText[i]);
		std::cout << i << "番目時点の数値 [" << cumulative.GetCount() << "]" << std::endl;
	}

	return 0;
}