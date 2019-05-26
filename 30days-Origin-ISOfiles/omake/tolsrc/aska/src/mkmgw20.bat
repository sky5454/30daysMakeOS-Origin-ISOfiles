REM Set Your MINGW Directory Below 
REM This Setting is for the mingw ver. 2.0
SET MINGW=c:\mingw
SET PATH=%MINGW%\bin;%MINGW%\lib\gcc-lib\mingw32\3.2;%PATH%
SET GCC_EXEC_PREFIX=%MINGW%\lib\gcc-lib\mingw32\3.2
SET LIBRARY_PATH=%MINGW%\lib;%MINGW%\lib\gcc-lib\mingw32\3.2
SET C_INCLUDE_PATH=%MINGW%\include
SET CPLUS_INCLUDE_PATH=%MINGW%\include\c++
SET OBJC_INCLUDE_PATH=%MINGW%\lib\gcc-lib\mingw32\3.2\include\objc
make
del gmake.pif
