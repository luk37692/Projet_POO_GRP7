#include "CustomerAddForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int AddFormMain() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is jour project name
    ProjetPOOGRP7::CustomerAddForm form;
    Application::Run(% form);
    return 0;
}