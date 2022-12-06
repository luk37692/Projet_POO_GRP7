#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int WinMain() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is jour project name
    ProjetPOOGRP7::MyForm form;
    Application::Run(% form);
    return 0;
}