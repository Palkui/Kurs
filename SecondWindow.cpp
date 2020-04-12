#include "SecondWindow.h"

#include <Windows.h>

using namespace KursV2; // Название проекта


int WINAPI WinЫус(HINSTANCE, HINSTANCE, LPSTR, int) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew SecondWindow);

	return 0;

}

