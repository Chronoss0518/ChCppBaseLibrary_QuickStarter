#pragma once

#include"main.h"

//前準備としてBaseObjectを継承したクラスを用意//
class TestObject : public ChCpp::BaseObject<char>
{
public:

	void Update()override
	{
		std::cout << "run TestObject" << std::endl;
	}
};

//前準備としてBaseComponentを継承したクラスを用意//
class TestComponent : public ChCpp::BaseComponent
{
public:

	void Update()override
	{
		std::cout << "run TestComponent str[" << str << "]" << std::endl;
	}

public:

	std::string str = "";
};

inline int mainFunction()
{
	//BaseObjectは内部にComponentを管理している親子構造を行うためのクラスです//

	//BaseObjectを管理するためのオブジェクトを準備//
	ChCpp::ObjectList obj;

	auto&& testObject1 = ChPtr::Make_S<ChCpp::BaseObject<char>>();
	auto&& testObject2 = ChPtr::Make_S<TestObject>();

	//SetParentやSetChildを用いて親子構造にできます//
	testObject1->SetChild(testObject2);

	//Componentをセットする際にはクラスを指定してあげる必要があります//
	auto&& component = testObject1->SetComponent<TestComponent>();

	component->str = "Test";

	//用意したオブジェクトを管理オブジェクトへセットします//
	obj.SetObject(testObject1);

	//クラスを指定してセットすることも可能です//
	auto&& testObject3 = obj.SetObject<TestObject>();

	//オブジェクトを管理しているオブジェクトのObject～と着いたメソッドを呼び出す事でその対象となるメソッドを全て呼び出してくれます//
	//今回はUpdateを走らせたいためobj.Updateまたはobj.ObjectUpdateを走らせることで解決します//
	obj.ObjectUpdate();

	//なお、オブジェクトのメソッドの走る順番は以下の通りです//
	//自身→自身のコンポーネント→自身の子オブジェクト//

	return 0;
}