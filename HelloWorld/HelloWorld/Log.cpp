#include "common.h"
#include "Log.h"
#include <iostream>

void InitLog()
{
	Log("Log initialized.");
}

	
void Log(const char* message)
{
	std::cout << message << std::endl;
}