#include "imgui.h"
#include "imgui-SFML.h"

#include <SFML/Graphics.hpp>

using namespace sf;

void menu(RenderWindow& window) {
	ImGui::SFML::Init(window);
	
	//ImGuiIO& io = ImGui::GetIO(); 
	//ImFont *f1 = io.Fonts->AddFontFromFileTTF("resource\\font2.ttf", 20);

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

		//�������� ����
		//ImGui::PushFont(f1);
		ImGui::Begin("������"); 
		if (ImGui::Button("������")) {
		
		}
		ImGui::End();

		window.clear();
		ImGui::SFML::Render(window);
		window.display();
	}

	ImGui::SFML::Shutdown();
}