#pragma once

#include"main.h"

#define BIT_FLG_SIZE 3

inline int mainFunction()
{
	//FileはBinaryではなくTextを操作するためのクラスです//
	ChCpp::File<char> file;

	//Fileは基本的に一度開くと内容を保持するように動きます//
	//第二引数の_isUpdateをtrueにすると、FileClose時に保持している内容でファイルを更新します//
	file.FileOpen("Test.txt", true);

	//FileReadeは読みだした内容の取得、FileWriteは内容の書き込みになります//
	file.FileWrite("Test Text");

	//最後にFileCloseをして別のファイルを開けるようにします//
	file.FileClose();

	//テキストファイルを操作する場合は上記の利用方法となり、以下はバイナリを操作するためのファイルになります//
	ChCpp::BinaryFile binary;

	return 0;
}