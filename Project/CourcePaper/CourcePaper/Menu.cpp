#include "imgui.h"
#include "imgui-SFML.h"

#include <SFML/Graphics.hpp>

using namespace sf;

void menu(RenderWindow& window) {
	ImGui::SFML::Init(window);

	Clock deltaClock;
	Sprite btnPlay, btnSetting, btnExit;

	bool isMenu = true;
	while (window.isOpen()) {

		Event event;
		while (window.pollEvent(event))
		{
			ImGui::SFML::ProcessEvent(event);
			if (event.type == Event::Closed)
				window.close();

		}
		ImGui::SFML::Update(window, deltaClock.restart());

		//Основное окно
		ImGui::Begin("Начало");
		ImGui::Text("Кое-какой-то текст.");
		ImGui::End();

		window.clear();
		ImGui::SFML::Render(window);
		window.display();
	}

	ImGui::SFML::Shutdown();
}