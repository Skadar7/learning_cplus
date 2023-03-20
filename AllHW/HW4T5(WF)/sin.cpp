#include "sin.h"

#include <Windows.h>

using namespace HW4T5WF;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew sin);
    return 0;
}