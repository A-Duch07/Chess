# Chess
Chess game

## Install SDL2 with windows

Reinstall the mgwin(compatibility issue with this program): http://www.mingw.org/wiki/Getting_Started <br>
Once you are on that link, find in the page mingw-get-setup.exe and click on it. After downloading it, execute it and install everything <br>
After that, set the environnement variables


First download SDL2 on this website: https://www.libsdl.org/download-2.0.php <br>
1. Go into the developpement libraries and download this file: SDL2-devel-2.0.14-mingw.tar.gz (MinGW 32/64-bit) --> Make sure to have a program like winrar to extract it. <br>
2. Extract it where you want to on your computer. <br>
3. Go in the extracted folder and click on this folder: i686-w64-mingw32 <br>
4. Copy the .a files from the appropriate lib directory to the MinGW\lib directory --> C:\MinGW\lib <br>
5. Copy the SDL directory from the appropriate include directory to the MinGW\include directory --> C:\MinGW\include <br>
6. In C:\\{your extracted location}\SDL2-2.0.14\i686-w64-mingw32\bin, copy the SDL2.dll into the correct directory --> C:\MinGW\bin <br> <br>

After doing that, if visual studio is open, close it and reopen it and change the compiler to the one we installed earlier. <br>
When it's done, use the cmake tool, config and build and everything should work!