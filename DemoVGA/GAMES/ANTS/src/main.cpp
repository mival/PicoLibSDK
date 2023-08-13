
// ****************************************************************************
//
//                                 Main code
//
// ****************************************************************************

#include "include.h"

// open selection
int OpenSelInx = 0;

// version text
const char* VerText = "v1.2";

// open text
const char* const OpenText[] = {
	"None of the black or red ants remember",
	"who and when started their age-old war",
	"for the anthill \"At the Two Spruces\".",
	"In order to put an end to the eternal",
	"battles, they decided to build castles,",
	"with the help of which they would gain",
	"dominance over the whole territory.",
	"The aim of the game is to build a castle with a height of 100",
	"or destroy the opponent's castle. Each card consumes certain",
	"amount of resources (number at the top right). The rate of",
	"resource generation depends on the amount of workers.",
};

const char* SoundText = "C:Sound ";
const char* SoundTextSel[3]  = { "OFF ", "SOME", "ALL " };

// display sound selection
void DispSoundSel()
{
	SelFont8x16();
	DrawTextBg(SoundText, 0, 0, COL_GRAY, COL_BLACK);
	DrawTextBg(SoundTextSel[SoundMode], 8*8, 0, COL_GRAY, COL_BLACK);
}

// display open screen
void DispOpen()
{
	// wait for VSync
	VgaWaitVSync();

	// clear screen
	DrawClear();

	// display ants
	DrawImg4Pal(OpenImg, OpenImg_Pal, 0, 0, 0, 0, 120, 120, 240);
	DrawImg4Pal(OpenImg, OpenImg_Pal, 120, 0, WIDTH-120, 53, 120, 120, 240);

	// display title
	DrawImg4Pal(TitleImg, TitleImg_Pal, 0, 0, 120+20, 0, 140, 53, 140);
	DrawImg4Pal(Title2Img, Title2Img_Pal, 0, 0, 120+10, 53, 60, 50, 60);

	// sound
	DispSoundSel();

	// display open text
	SelFont5x8();
	int i;
	for (i = 0; i < count_of(OpenText); i++)
	{
		DrawText(OpenText[i], 0, 110+i*8, COL_WHITE);
	}

	// display version
	SelFont8x16();
	DrawText(VerText, 280, 40, COL_WHITE);
}

// display open selection
void DispOpenSel()
{
	DrawImg4Pal(OpenSelImg, OpenSelImg_Pal, 0, 0, 0, HEIGHT-40, WIDTH, 40, WIDTH);
	if (OpenSelInx < 4)
		DrawBlit4Pal(OpenSel2Img, OpenSel2Img_Pal, 0, 0, OpenSelInx*60, HEIGHT-40, 60, 40, 60, COL_BLACK);
	else
		DrawBlit4Pal(OpenSel3Img, OpenSel3Img_Pal, 0, 0, (OpenSelInx-4)*40+4*60, HEIGHT-40, 40, 40, 40, COL_BLACK);
}

// main function
int main()
{
	char ch;
	// u32 t;

	// set off back buffers
	DispSetStripOff();

	// display open screen
	DispOpen();
	DispOpenSel();

	// main loop
	// t = Time(); // auto-demo time
	while (True)
	{

		// input from keyboard
		ch = KeyGet();
		switch (ch)
		{
		case BTN_C:
			if (KeyPressed(BTN_B))
			{
				// quit
				ResetToBootLoader();
			}
			else
			{
				// sound mode
				SoundMode--;
				if (SoundMode < 0) SoundMode = 2;
				DispSoundSel();
			}
			break;

		case BTN_B:
			if (KeyPressed(BTN_C))
			{
				// quit
				ResetToBootLoader();
			}
			else
			{
				// cursor right
				OpenSelInx++;
				if (OpenSelInx > 5) OpenSelInx = 0;
				DispOpenSel();
				KeyFlush();
			}
			break;

		// run game
		case BTN_A:
			switch (OpenSelInx)
			{
			case 0: Game(PLAYER_HUMAN, PLAYER_HUMAN, False); break;
			case 1: Game(PLAYER_HUMAN, PLAYER_COMP, False); break;
			case 2: Game(PLAYER_COMP, PLAYER_HUMAN, False); break;
			case 3: Game(PLAYER_COMP, PLAYER_COMP, False); break;
			case 4: Game(PLAYER_HUMAN, PLAYER_USB, False); UsbPortTerm(); break;
			case 5: Game(PLAYER_USB, PLAYER_HUMAN, False); UsbPortTerm(); RandShift(); break;
			}
			StopSound();

			DispSetStripOff();
			DispOpen();
			DispOpenSel();
			KeyWaitNoPressed();
			KeyFlush();
			break;
		}
	}
}
