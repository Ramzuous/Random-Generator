#include "Rand.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]//leave this as is
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	RandomGenerator::RandomGenerator form;
	Application::Run(%form);
}