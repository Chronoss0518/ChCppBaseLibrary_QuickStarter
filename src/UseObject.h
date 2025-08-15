#pragma once

#include"main.h"

//�O�����Ƃ���BaseObject���p�������N���X��p��//
class TestObject : public ChCpp::BaseObject<char>
{
public:

	void Update()override
	{
		std::cout << "run TestObject" << std::endl;
	}
};

//�O�����Ƃ���BaseComponent���p�������N���X��p��//
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
	//BaseObject�͓�����Component���Ǘ����Ă���e�q�\�����s�����߂̃N���X�ł�//

	//BaseObject���Ǘ����邽�߂̃I�u�W�F�N�g������//
	ChCpp::ObjectList obj;

	auto&& testObject1 = ChPtr::Make_S<ChCpp::BaseObject<char>>();
	auto&& testObject2 = ChPtr::Make_S<TestObject>();

	//SetParent��SetChild��p���Đe�q�\���ɂł��܂�//
	testObject1->SetChild(testObject2);

	//Component���Z�b�g����ۂɂ̓N���X���w�肵�Ă�����K�v������܂�//
	auto&& component = testObject1->SetComponent<TestComponent>();

	component->str = "Test";

	//�p�ӂ����I�u�W�F�N�g���Ǘ��I�u�W�F�N�g�փZ�b�g���܂�//
	obj.SetObject(testObject1);

	//�N���X���w�肵�ăZ�b�g���邱�Ƃ��\�ł�//
	auto&& testObject3 = obj.SetObject<TestObject>();

	//�I�u�W�F�N�g���Ǘ����Ă���I�u�W�F�N�g��Object�`�ƒ��������\�b�h���Ăяo�����ł��̑ΏۂƂȂ郁�\�b�h��S�ČĂяo���Ă���܂�//
	//�����Update�𑖂点��������obj.Update�܂���obj.ObjectUpdate�𑖂点�邱�Ƃŉ������܂�//
	obj.ObjectUpdate();

	//�Ȃ��A�I�u�W�F�N�g�̃��\�b�h�̑��鏇�Ԃ͈ȉ��̒ʂ�ł�//
	//���g�����g�̃R���|�[�l���g�����g�̎q�I�u�W�F�N�g//

	return 0;
}