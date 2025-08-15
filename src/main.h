#pragma once

//VC++では"pragma comment"を利用してリンクすることができる//
//"windows.h"をインクルードするまたは_WINDOWS_マクロを定義することでChCppLibraryのリンクが行われる//
//この時、ChCppLibraryのStaticLibraryのパスを"ライブラリディレクトリ"に登録しておく必要がある//
#ifndef _WINDOWS_
#define _WINDOWS_ 
#endif

#include<ChBaseLibrary.h>

#include<iostream>

int mainFunction();