#pragma once
#ifndef GAME_SETTING_HPP
#define GAME_SETTING_HPP

struct configurateStruct {
	int windowWidth;	//������ ����
	int windowHeight;	//������ ����
};

int saveConfigurate();			//��������� ������������ � ����
int loadConfigurate();			//��������� ������������ �� �����
int defaultConfigurate();		//��������� ������������ �� ���������
configurateStruct getSetting(); //������� ��������� ������������

#endif // !GAME_SETTING_HPP
