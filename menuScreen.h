#pragma once
#include "gameManager.h"
#include "menuButton.h"
#include "loadingScreen.h"

class menuScreen {
public:
	static void render();
	static void handleEvent(SDL_Event e);
	static void Update();

	static menuButton* playButton;
};

