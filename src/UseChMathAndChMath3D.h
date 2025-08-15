#pragma once

#include"main.h"

float r = 1.0f, g = 1.0f, b = 1.0f;

inline int mainFunction()
{
	//ChMath及びChMath3Dは3DLibrary(例えばOpenGL)を利用しなくてもある程度融通を聞かせることができる計算系の機能が含まれます。//

	ChVector3 vec3;
	ChQuaternion qua;
	ChLMatrix mat;

	//主に利用される代表的なクラスは上記の3つになります。//

	//また、上記のクラスには共通してSerializeとDeserializeの機能が含まれているため
	//Fileへの書き出しも容易になっています。//
	std::cout << "Vector3 [" << vec3.Serialize<char>(",","") << "]" << std::endl;

	//Vectorに関しては別の名称も同時に保持しています。//
	//例えばVector3ではx,y,zとr,g,bは同じメモリを利用しています。//
	//以下ではどの値に初期化するかをわかりやすくしたメソッドの利用イメージです//
	vec3 = ChVector3::FromColor(r, g, b);

	std::cout << "Vector3(RGB) [" << vec3.Serialize<char>(",", "") << "]" << std::endl;

	//これらのクラスは保持する変数を配列として保持しているため、以下のように取り出すことも可能です//
	float* tmoValue = &vec3.val[0];

	std::cout << "Vector3(float*) [" << tmoValue[0] << "," << tmoValue[1] << "," << tmoValue[2] << "]" << std::endl;

	//上記のようにポインタを取得することもできますが、さらに以下のように配列として利用できます。//

	//GetArrayは配列の要素数を取得する関数//
	float tmpValue2[vec3.val.GetArray()];
	for (size_t i = 0; i < vec3.val.GetArray(); i++)
	{
		tmpValue2[i] = vec3.val[i];
		std::cout << i << "番目の値 [" << tmpValue2[i] << "]" << std::endl;
	}

	return 0;
}