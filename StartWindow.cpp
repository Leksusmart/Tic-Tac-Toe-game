#include "StartWindow.h"
#include <Windows.h>
#include <time.h>
bool buf = FreeConsole();//��������� �������, ����� �� ������

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]//main ����� ����������� � ��������� ������ ������
int main(array<String^>^ args) {
	srand(time(NULL));
	Application::SetCompatibleTextRenderingDefault(false);//���������� ��� ��������� ��������� ������
	Application::EnableVisualStyles();//���������� ��������� ���������� �����
	��������������::StartWindow form;
	Application::Run(% form);
}