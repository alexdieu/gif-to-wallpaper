#include <windows.h>
#include <iostream>

// very poor code gif to wallpaper windows 10 by alexdieu

using namespace std;

int main(void)         
{	
    while( 0 < 1 ){
			std::string s = ("C:\\Users\\alexd\\Downloads\\GIF-Wallpaper-master\\GIF-Wallpaper-master\\tmp_files\\0.jpg");
			SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (PVOID*)s.c_str(), SPIF_SENDCHANGE);
			Sleep(50);
			std::string z = ("C:\\Users\\alexd\\Downloads\\GIF-Wallpaper-master\\GIF-Wallpaper-master\\tmp_files\\1.jpg");
			SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (PVOID*)z.c_str(), SPIF_SENDCHANGE);
			Sleep(50);
			std::string e = ("C:\\Users\\alexd\\Downloads\\GIF-Wallpaper-master\\GIF-Wallpaper-master\\tmp_files\\2.jpg");
			SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (PVOID*)e.c_str(), SPIF_SENDCHANGE);
			Sleep(50);
			std::string d = ("C:\\Users\\alexd\\Downloads\\GIF-Wallpaper-master\\GIF-Wallpaper-master\\tmp_files\\3.jpg");
			SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (PVOID*)d.c_str(), SPIF_SENDCHANGE);
			Sleep(50);
			std::string v = ("C:\\Users\\alexd\\Downloads\\GIF-Wallpaper-master\\GIF-Wallpaper-master\\tmp_files\\4.jpg");
			SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (PVOID*)v.c_str(), SPIF_SENDCHANGE);
			Sleep(50);
	}
	
   return 0;
}