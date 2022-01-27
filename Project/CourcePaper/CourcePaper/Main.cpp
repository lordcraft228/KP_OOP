#include "imgui.h"
#include "imgui-SFML.h"

#include "Menu.h"

#include <SFML/Graphics.hpp>
#include <fstream>

int saveConfigurate();		//Сохранить конфигурацию в файл
int loadConfigurate();		//Загрузить конфигурацию из файла
int defaultConfigurate();	//Загрузить конфигурацию по умолчанию

using namespace sf;

struct configurateStruct {
	int windowWidth;	//Ширина окна
	int windowHeight;	//Высота окна
};

//Файл конфигурации
configurateStruct confSetting;

//Имя файла конфигурации
const char config[] = "config.txt";

int main()
{
	//Загрузка конфигурации
	if (loadConfigurate() == -1) 
		exit(1);	//Ошибка
	

	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(confSetting.windowWidth, confSetting.windowHeight), "SFML Works!", sf::Style::Fullscreen);
	
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