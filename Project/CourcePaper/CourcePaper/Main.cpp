#include "imgui.h"
#include "imgui-SFML.h"

#include "Menu.h"
#include "GameSetting.h"

#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
	//�������� ������������
	if (loadConfigurate() == -1) 
		exit(1);	//������
	

	// ������, �������, ����������, �������� ������� ����� ����������
	RenderWindow window(VideoMode(getSetting().windowWidth, getSetting().windowHeight), "SFML Works!", sf::Style::Fullscreen);
	
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

