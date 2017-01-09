// HelloWorld.cpp: Hauptprojektdatei.

#include "stdafx.h"
//#include <iostream>

using namespace System;
//using namespace std;

int main(array<System::String ^> ^args)
{
	//char zahl;
	String^ line;

	Console::WriteLine(L" ////////////////////////////////////////////////////////////");
    Console::WriteLine(L" //                   Hello World                          //");
	Console::WriteLine(L" ////////////////////////////////////////////////////////////");

	for (size_t i = 0; i < 5; i++)
	{
		Console::WriteLine("\n bitte eine Zahl eingeben:");
		line = Console::ReadLine();
		Console::WriteLine("\n OK du hast " + line + " eingegeben");
		Console::ReadLine();
		Console::WriteLine(L" ////////////////////////////////////////////////////////////");
	}
	
	return 0;
}
