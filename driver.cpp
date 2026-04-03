#include <windows.h>
#include <psapi.h>
#include <iostream>
#include <vector>

void list_driver() {
	DWORD cbNeeded;

	BOOL Hdriverenum = EnumDeviceDrivers(NULL, 0, &cbNeeded);
	if (Hdriverenum == 0)
	{
		std::cout << "Error:" << GetLastError() << std::endl;
		return; 
	}

	int cDrivers = cbNeeded / sizeof(LPVOID);
	std::vector<LPVOID> drivers(cDrivers);

	
	BOOL Hdriverenumsecond = EnumDeviceDrivers(drivers.data(), cbNeeded, &cbNeeded);

	if (Hdriverenumsecond) 
	{
	
		for (int i = 0; i < cDrivers; i++)
		{
			char szDriver[1024];
			
			DWORD listalldrivers = GetDeviceDriverBaseNameA(drivers[i], szDriver, sizeof(szDriver));

			if (listalldrivers != 0)
			{
				std::cout << "list: " << szDriver << " | Base: " << drivers[i] << std::endl;
			}
			else
			{
				std::cout << "Error:" << i << ": " << GetLastError() << std::endl;
			}
		}
	}
	else
	{
		GetLastError();
	}
}
