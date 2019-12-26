// DiscordMessageWiper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>



int main()
{
	std::cout << "Discord Message Wiper by IvaN4GameS!\n";
	std::cout << "\n";
	std::cout << "Hold F4 to start deleting discord messages.\n";
	
	while (true)
	{

		Sleep(1);
		if (GetKeyState(0x73) & 0x8000) {

			keybd_event(VK_UP, 0, 0, 0);
			keybd_event(VK_UP, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(VK_CONTROL, 0x9d, 0, 0); 
			keybd_event(VkKeyScan(0x41), 0x9e, 0, 0);
			keybd_event(VkKeyScan(0x41), 0x9e, KEYEVENTF_KEYUP, 0);
			keybd_event(VK_CONTROL, 0x9d, KEYEVENTF_KEYUP, 0); 
			keybd_event(VK_BACK, 0, 0, 0);
			keybd_event(VK_BACK, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(VK_RETURN, 0, 0, 0); 
			keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
			keybd_event(VK_RETURN, 0, 0, 0);
			keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
			Sleep(80);
			
		}
	}
	
}

