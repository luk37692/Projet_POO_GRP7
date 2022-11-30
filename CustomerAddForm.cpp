#include "CustomerAddForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void AddFormMain(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is jour project name
    ProjetPOOGRP7::CustomerAddForm form;
    Application::Run(% form);
}