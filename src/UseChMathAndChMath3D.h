#pragma once

#include"main.h"

float r = 1.0f, g = 1.0f, b = 1.0f;

inline int mainFunction()
{
	//ChMath�y��ChMath3D��3DLibrary(�Ⴆ��OpenGL)�𗘗p���Ȃ��Ă�������x�Z�ʂ𕷂����邱�Ƃ��ł���v�Z�n�̋@�\���܂܂�܂��B//

	ChVector3 vec3;
	ChQuaternion qua;
	ChLMatrix mat;

	//��ɗ��p������\�I�ȃN���X�͏�L��3�ɂȂ�܂��B//

	//�܂��A��L�̃N���X�ɂ͋��ʂ���Serialize��Deserialize�̋@�\���܂܂�Ă��邽��
	//File�ւ̏����o�����e�ՂɂȂ��Ă��܂��B//
	std::cout << "Vector3 [" << vec3.Serialize<char>(",","") << "]" << std::endl;

	//Vector�Ɋւ��Ă͕ʂ̖��̂������ɕێ����Ă��܂��B//
	//�Ⴆ��Vector3�ł�x,y,z��r,g,b�͓����������𗘗p���Ă��܂��B//
	//�ȉ��ł͂ǂ̒l�ɏ��������邩���킩��₷���������\�b�h�̗��p�C���[�W�ł�//
	vec3 = ChVector3::FromColor(r, g, b);

	std::cout << "Vector3(RGB) [" << vec3.Serialize<char>(",", "") << "]" << std::endl;

	//�����̃N���X�͕ێ�����ϐ���z��Ƃ��ĕێ����Ă��邽�߁A�ȉ��̂悤�Ɏ��o�����Ƃ��\�ł�//
	float* tmoValue = &vec3.val[0];

	std::cout << "Vector3(float*) [" << tmoValue[0] << "," << tmoValue[1] << "," << tmoValue[2] << "]" << std::endl;

	//��L�̂悤�Ƀ|�C���^���擾���邱�Ƃ��ł��܂����A����Ɉȉ��̂悤�ɔz��Ƃ��ė��p�ł��܂��B//

	//GetArray�͔z��̗v�f�����擾����֐�//
	float tmpValue2[vec3.val.GetArray()];
	for (size_t i = 0; i < vec3.val.GetArray(); i++)
	{
		tmpValue2[i] = vec3.val[i];
		std::cout << i << "�Ԗڂ̒l [" << tmpValue2[i] << "]" << std::endl;
	}

	return 0;
}