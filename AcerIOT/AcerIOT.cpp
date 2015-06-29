// AcerIOT.cpp: 主要專案檔。


#include "MyForm.h"

using namespace System;
using namespace AcerIOT;

int main(array<System::String ^> ^args)
{
   // Console::WriteLine(L"Hello World");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm());
    //return 0;
}
