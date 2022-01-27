#include "imgui.h"
#include "imgui-SFML.h"

#include "Menu.h"

#include <SFML/Graphics.hpp>
#include <fstream>

int saveConfigurate();		//��������� ������������ � ����
int loadConfigurate();		//��������� ������������ �� �����
int defaultConfigurate();	//��������� ������������ �� ���������

using namespace sf;

struct configurateStruct {
	int windowWidth;	//������ ����
	int windowHeight;	//������ ����
};

//���� ������������
configurateStruct confSetting;

//��� ����� ������������
const char config[] = "config.txt";

int main()
{
	//�������� ������������
	if (loadConfigurate() == -1) 
		exit(1);	//������
	

	// ������, �������, ����������, �������� ������� ����� ����������
	RenderWindow window(VideoMode(confSetting.windowWidth, confSetting.windowHeight), "SFML Works!", sf::Style::Fullscreen);
	
	menu(window);
	//// ������� ���� ����������. �����������, ���� ������� ����
	//while (window.isOpen())
	//{
	//	// ������������ ������� ������� � �����
	//	Event event;
	//	while (window.pollEvent(event))
	//	{

	//		// ������������ ����� �� �������� � ����� ������� ����?
	//		if (event.type == Event::Closed)
	//			// ����� ��������� ���
	//			window.close();
	//	}
	//	window.clear(Color(250, 220, 100, 0));

	//	// ��������� ����
	//	window.display();
	//}
	
	return 0;
}


int defaultConfigurate() {
	confSetting.windowWidth = 800;
	confSetting.windowHeight = 600;

	return (saveConfigurate()) ? 1 : 0;
}

int loadConfigurate() {
	std::ifstream inData(config);

	if (!inData)
		return (defaultConfigurate()) ? 1 : -1;

	inData >> confSetting.windowWidth;
	inData >> confSetting.windowHeight;

	return 0;
}

int saveConfigurate() {
	std::ofstream outData(config);

	if (!outData)
		return 1;

	outData << confSetting.windowWidth;
	outData << confSetting.windowHeight;

	return 0;
}