#include "UserLogin.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int UserLogin() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is jour project name
    ProjetPOOGRP7::UserLogin form;
    Application::Run(% form);
    return 0;
}