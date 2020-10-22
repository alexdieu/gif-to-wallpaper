#include <windows.h>
#include <iostream>

// very poor code gif to wallpaper windows 10 by alexdieu

using namespace std;

int main(void)         
{	
    while( 0 < 1 ){
			std::string s = ("FIRSTPATHTOPNG");
			SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (PVOID*)s.c_str(), SPIF_SENDCHANGE);
			Sleep(50);
			std::string z = ("SECONDPATHTOPNG");
			SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (PVOID*)z.c_str(), SPIF_SENDCHANGE);
			Sleep(50);
			std::string d = ("THIRDPATHTOPNG");
			SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (PVOID*)d.c_str(), SPIF_SENDCHANGE);
			Sleep(50);
			std::string v = ("FOURTHPATHTOPNG");
			SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (PVOID*)v.c_str(), SPIF_SENDCHANGE);
			Sleep(50);
	    		std::string e = ("FIFTHPATHTOPNG");
			SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (PVOID*)e.c_str(), SPIF_SENDCHANGE);
			Sleep(50);
	}
	
   return 0;
}
