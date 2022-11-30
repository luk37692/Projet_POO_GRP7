#include "CustomerForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void __clrcall CustMain(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is jour project name
    ProjetPOOGRP7::CustomerForm form;
    Application::Run(% form);
}