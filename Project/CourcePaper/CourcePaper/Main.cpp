#include "imgui.h"
#include "imgui-SFML.h"
#include "Menu.h"

#include <SFML/Graphics.hpp>

using namespace sf;
//using namespace ImGui::SFML;

int main()
{
	// ������, �������, ����������, �������� ������� ����� ����������
	RenderWindow window(VideoMode(200, 200), "SFML Works!", sf::Style::Fullscreen);
	
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