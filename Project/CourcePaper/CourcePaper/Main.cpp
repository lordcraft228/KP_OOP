#include "imgui.h"
#include "imgui-SFML.h"

#include "Menu.h"
#include "GameSetting.h"

#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
	//Загрузка конфигурации
	if (loadConfigurate() == -1) 
		exit(1);	//Ошибка
	

	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(getSetting().windowWidth, getSetting().windowHeight), "SFML Works!", sf::Style::Fullscreen);
	
	menu(window);
	//// Главный цикл приложения. Выполняется, пока открыто окно
	//while (window.isOpen())
	//{
	//	// Обрабатываем очередь событий в цикле
	//	Event event;
	//	while (window.pollEvent(event))
	//	{

	//		// Пользователь нажал на «крестик» и хочет закрыть окно?
	//		if (event.type == Event::Closed)
	//			// тогда закрываем его
	//			window.close();
	//	}
	//	window.clear(Color(250, 220, 100, 0));

	//	// Отрисовка окна
	//	window.display();
	//}
	
	return 0;
}

