#include"DxLib.h"
int WINAPI WinMain(HINSTANCE hinstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	SetWindowText("2016021_’ß“c—º‰î");
	SetGraphMode(640, 480, 16);
	ChangeWindowMode(true);   
	if (DxLib_Init() == -1)
	{
		return-1;      
	}
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{


	}
	SetDrawScreen(DX_SCREEN_BACK);
	ClsDrawScreen();
	ScreenFlip();
	DxLib_End();
	return 0;

}