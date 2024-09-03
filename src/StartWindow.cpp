#include "StartWindow.h"
#include <time.h>
#include <stdlib.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]//main будет запускаться в отдельном потоке данных
int main(array<String^>^ args) {
	srand(time(NULL));
	Application::SetCompatibleTextRenderingDefault(false);//Необходима для коректрой обработки текста
	Application::EnableVisualStyles();//Подключаем различные визуальные стили
	TicTac::StartWindow form;
	Application::Run(% form);
}