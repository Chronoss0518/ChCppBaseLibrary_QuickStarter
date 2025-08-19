### 概要

このProjectは`ChCppLibrary`のサンプルとして組み上げたものです。
利用しているライブラリは以下のものになります。

- [ChCppBaseLibrary](https://github.com/Chronoss0518/ChCppBaseLibrary)

### 切り替え方法

main.cppにある以下のコメントアウトを切り替えることで、内容が切り替わるようになっています。

```C++

//挙動を確認したい項目のコメントアウトを外してください//

////ChStdの使用方法//
//#include"UseChStd.h"//←切り替えられる場所//

////ChPtrの使用方法//
//#include"UseChPtr.h"//←切り替えられる場所//

////ChMath及びChMath3Dの利用方法//
//#include"UseChMathAndChMath3D.h"//←切り替えられる場所//

////BitBoolの利用方法//
//#include"UseBitBool.h"//←切り替えられる場所//

////BaseFrameの利用方法//
//#include"UseFrame.h"//←切り替えられる場所//

////BaseObjectとBaseComponentの利用方法//
//#include"UseObject.h"//←切り替えられる場所//

////FileとBinaryFileの利用方法//
//#include"UseFile.h"//←切り替えられる場所//

////Cumulativeの利用方法//
//#include"UseCumulative.h"//←切り替えられる場所//

```

サンプルコードは以下の通りです。

- [UseChStd](https://github.com/Chronoss0518/ChCppBaseLibrary_QuickStarter/tree/master/src/UseChStd.h)
  - ChStdの簡単な使い方のサンプルです
- [UseChPtr](https://github.com/Chronoss0518/ChCppBaseLibrary_QuickStarter/tree/master/src/UseChPtr.h)
  - ChPtrの簡単な使い方のサンプルです
- [UseChMathAndChMath3D](https://github.com/Chronoss0518/ChCppBaseLibrary_QuickStarter/tree/master/src/UseChMathAndChMath3D.h)
  - ChMath及びChMath3Dの簡単な使い方のサンプルです
- [UseBitBool](https://github.com/Chronoss0518/ChCppBaseLibrary_QuickStarter/tree/master/src/UseBitBool.h)
  - BitBoolの簡単な使い方のサンプルです
- [UseFrame](https://github.com/Chronoss0518/ChCppBaseLibrary_QuickStarter/tree/master/src/UseFrame.h)
  - Frame関係の簡単な使い方のサンプルです
- [UseObject](https://github.com/Chronoss0518/ChCppBaseLibrary_QuickStarter/tree/master/src/UseObject.h)
  - Object関係の簡単な使い方のサンプルです
- [UseFile](https://github.com/Chronoss0518/ChCppBaseLibrary_QuickStarter/tree/master/src/UseFile.h)
  - (Text)File及びBinaryFileの簡単な使い方のサンプルです
- [UseCumulative](https://github.com/Chronoss0518/ChCppBaseLibrary_QuickStarter/tree/master/src/UseCumulative.h)
  - Cumulativeの簡単な使い方のサンプルです