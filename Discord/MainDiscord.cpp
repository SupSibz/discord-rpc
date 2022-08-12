#include <iostream>
#include "Discord.h"

Discord * g_Discord;

int main()
{
	g_Discord->Initialize();
	g_Discord->Update();
	system("PAUSE");
}
