#include "SecondWindow.h"

#include <Windows.h>

using namespace KursV2; // �������� �������


int WINAPI Win���(HINSTANCE, HINSTANCE, LPSTR, int) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew SecondWindow);

	return 0;

}

