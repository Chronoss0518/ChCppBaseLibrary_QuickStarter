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
	//ChPtr�͑S�̂ŗ��p����|�C���^�[�Ɋւ���@�\�����Ă��閼�O��Ԃł�//

	//std::shared_ptr�̑����ChPtr::Shared������܂�
	//�쐬����ꍇ�ɂ�std::make_shared�̑����ChPtr::Make_S������܂�//
	ChPtr::Shared<int> shared = ChPtr::Make_S<int>(1);

	//null���ǂ����𔻒f���邽�߂̊֐������݂��܂�//
	int* num = nullptr;

	if (ChPtr::NullCheck(num))
		std::cout << "num is null" << std::endl;

	if (ChPtr::NotNullCheck(num))
		std::cout << "num is not null" << std::endl;

	//dynamic_cast�̑����ChPtr::SafeCast�����݂��܂��B
	TestStruct1* tmpPtr = new TestStruct2();

	TestStruct2* testPtr = ChPtr::SafeCast<TestStruct2>(tmpPtr);

	if (ChPtr::NotNullCheck(testPtr))
		std::cout << "testPtr is not null" << std::endl;

	//std::dynamic_pointer_cast�̑����ChPtr::SharedSafeCast�����݂��܂��B
	ChPtr::Shared<TestStruct1> tmpSPtr = ChPtr::Make_S<TestStruct2>();

	ChPtr::Shared<TestStruct2> testSPtr = ChPtr::SharedSafeCast<TestStruct2>(tmpSPtr);

	if (testSPtr != nullptr)
		std::cout << "testSPtr is not null" << std::endl;

	delete testPtr;
	testPtr = nullptr;

	return 0;
}