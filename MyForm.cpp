#include "MyForm.h"

#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdlib.h>
#include <stdio.h>


// Need to link with Ws2_32.lib, Mswsock.lib, and Advapi32.lib
#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")


using namespace System;
using namespace System::Windows::Forms;


[STAThread]


void Main(array<String^>^ args)
{
	bool Check_Debug = IsDebuggerPresent(); //IsDebuggerPresent отключается всем , зачем его вообще использовать ? в том же  ollydbg он вообще отключается мышкой
	if (Check_Debug) { // господи боже eax в 0 и все обойдет
		exit(1);
	}
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Cli_WINforms::MyForm form;
	Application::Run(%form);
}




