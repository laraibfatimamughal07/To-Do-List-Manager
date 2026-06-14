#pragma once

#include <windows.h>
#define spaces "   "

const int COLOR_DEFAULT = 7;
const int COLOR_FOLDER = 11;
const int COLOR_FILE = 15;
const int COLOR_ERROR = 12;

inline void setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

//Red-> 4
//Normal-> 7