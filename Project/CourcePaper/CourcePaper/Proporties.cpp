#include "Properties.h"
#include <fstream>

#include <SFML/Graphics.hpp>

using namespace sf;

int defaultConfigurate() {

	return 0;
}

int loadConfigurate() {
	std::ifstream inData(config);
	
	if (!inData)
		return (defaultConfigurate()) ? 1 : 0;

	//Обычная загрузка

	return 0;
}

int saveConfigurate() {
	std::ofstream outData(config);

	if (!outData) {
		//error
	}

	//Обычная загрузка

	return 0;
}
