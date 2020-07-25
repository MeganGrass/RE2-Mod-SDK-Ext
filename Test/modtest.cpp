
#include "modtest.h"

UCHAR* pExe;

CHAR * ConfigStr = "Config\0";

FARPROC hook_config;
static VOID Config(VOID) {

	// Prerendered Background
	G->SaveData.Stage_no = 1;
	G->SaveData.Room_no = 0;
	Bg_load();

	// Print String
	Print14(135, 2, 0, 0x4000, (UCHAR*)ConfigStr);

	// Complete
	Task_kill(2);
}
static VOID _NewConfig(VOID) {

	// Custom Function
	Task_execute(2, Config);

	// Resume
	Config_fade_in_wait(0x0068a204 - EXE_BASE);
}
NAKED VOID NewConfig(VOID) {
	__asm { call	_NewConfig }
	__asm { jmp		hook_config }
}
// 
VOID ModMain(UCHAR* pExe) {

	// Hook into executable
	::pExe = pExe;
	Bio2_Hook(pExe);

	// Test some stuff
	INJECT(0x0044a06c, NewConfig);
	hook_config = (FARPROC)&pExe[0x0044a071 - EXE_BASE];

}