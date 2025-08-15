#pragma once

//Windowsではpragma commentを利用することができるため_WINDOWS_マクロを用いるとリンクもしてくれる//
//"windows.h"をインクルードすることで内部的に_WINDOWS_マクロが定義されるためリンクしてくれる//
#ifndef _WINDOWS_
#define _WINDOWS_ 
#endif

#include<ChBaseLibrary.h>

#include<iostream>

int mainFunction();