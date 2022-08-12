#include "Discord.h"
#include <time.h>
#include <chrono>
static int64_t eptime = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();


void Discord::Initialize()
{
	DiscordEventHandlers Handle;
	memset(&Handle, 0, sizeof(Handle));
	Discord_Initialize("957574469931647086", &Handle, 1, NULL); // APPLICATION ID
}

void Discord::Update()
{
	//ShowWindow(GetConsoleWindow(), SW_HIDE); // [[ Hide ConsoleLog ]]

	DiscordRichPresence discordPresence;
	memset(&discordPresence, 0, sizeof(discordPresence));
	discordPresence.details = "Secure"; // Detali
	discordPresence.state = "Secure - Webhook Discord"; // 
	discordPresence.startTimestamp = eptime; // Time Stamp / 1000

	// ICON
	discordPresence.largeImageKey = "profile01"; // Name Icon
	discordPresence.largeImageText = "Discord Tutorial"; // Text Image เวลา Mouse โดน Icon จะขึ้นแจ้ง ข้อความนี้
	discordPresence.smallImageKey = "profile01"; // Name Icon Small ขนาดเล็ก
	Discord_UpdatePresence(&discordPresence);
}