#pragma once

#include"main.h"

class TestStruct1 
{
public:

	virtual ~TestStruct1() {};
};

class TestStruct2 : public TestStruct1{};

inline int mainFunction()
{
	//ChPtrは全体で利用するポインターに関する機能を入れている名前空間です//

	//std::shared_ptrの代わりにChPtr::Sharedがあります
	//作成する場合にもstd::make_sharedの代わりにChPtr::Make_Sがあります//
	ChPtr::Shared<int> shared = ChPtr::Make_S<int>(1);

	//nullかどうかを判断するための関数も存在します//
	int* num = nullptr;

	if (ChPtr::NullCheck(num))
		std::cout << "num is null" << std::endl;

	if (ChPtr::NotNullCheck(num))
		std::cout << "num is not null" << std::endl;

	//dynamic_castの代わりにChPtr::SafeCastが存在します。
	TestStruct1* tmpPtr = new TestStruct2();

	TestStruct2* testPtr = ChPtr::SafeCast<TestStruct2>(tmpPtr);

	if (ChPtr::NotNullCheck(testPtr))
		std::cout << "testPtr is not null" << std::endl;

	//std::dynamic_pointer_castの代わりにChPtr::SharedSafeCastが存在します。
	ChPtr::Shared<TestStruct1> tmpSPtr = ChPtr::Make_S<TestStruct2>();

	ChPtr::Shared<TestStruct2> testSPtr = ChPtr::SharedSafeCast<TestStruct2>(tmpSPtr);

	if (testSPtr != nullptr)
		std::cout << "testSPtr is not null" << std::endl;

	delete testPtr;
	testPtr = nullptr;

	return 0;
}