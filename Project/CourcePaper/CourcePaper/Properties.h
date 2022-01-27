#pragma once

struct configurateStruct{
	int screenScaleType;		//��� ���������� ������
};

//��� ����� ������������
const char config[] = "config.txt";

//������ ����
int windowWidth;

//������ ����
int windowHeight;

/*
* ������� ��� �������� ������ 
* �� ����� ������������.
* 0		- �� �������,
* 1		- ���������� ������ �� ���������,
* -1	- ������
*/
int loadConfigurate();

/*
* ������� ��� ���������� ������
* � ���� ������������.
* 0		- �� �������,
* 1		- ���������� ������ �� ���������,
* -1	- ������
*/
int saveConfigurate();