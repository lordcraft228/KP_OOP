#include <fstream>
#include "GameSetting.h"

//Имя файла конфигурации
const char config[] = "config.txt";

//Файл конфигурации
configurateStruct confSetting;

int saveConfigurate() {
	std::ofstream outData(config);

	if (!outData)
		return 1;

	outData << confSetting.windowWidth;
	outData << confSetting.windowHeight;

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

configurateStruct getSetting() {
	return confSetting;
}
