#include "StartWindow.h"
#include <time.h>
#include <stdlib.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]//main ����� ����������� � ��������� ������ ������
int main(array<String^>^ args) {
	srand(time(NULL));
	Application::SetCompatibleTextRenderingDefault(false);//���������� ��� ��������� ��������� ������
	Application::EnableVisualStyles();//���������� ��������� ���������� �����
	TicTac::StartWindow form;
	Application::Run(% form);
}