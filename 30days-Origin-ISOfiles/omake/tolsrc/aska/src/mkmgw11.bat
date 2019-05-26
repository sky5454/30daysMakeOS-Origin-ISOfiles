REM Set Your MINGW Directory Below 
REM This Setting is for the mingw ver. 1.1
SET MINGW=c:\mingw
SET PATH=%MINGW%\bin;%MINGW%\lib\gcc-lib\mingw32\2.95.3-6;%PATH%
SET GCC_EXEC_PREFIX=%MINGW%\lib\gcc-lib\mingw32\2.95.3-6
SET LIBRARY_PATH=%MINGW%\lib;%MINGW%\lib\gcc-lib\mingw32\2.95.3-6
SET C_INCLUDE_PATH=%MINGW%\include
SET CPLUS_INCLUDE_PATH=%MINGW%\include\g++-3
SET OBJC_INCLUDE_PATH=%MINGW%\lib\gcc-lib\mingw32\2.95.3-6\include\obj
make
del gmake.pif
