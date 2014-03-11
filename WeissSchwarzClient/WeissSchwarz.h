#ifndef WEISSSCHWARZ_H
#define WEISSSCHWARZ_H
#define WIN32_LEAN_AND_MEAN

#include "game.h"
#include "image.h"
#include "textDX.h"
#include "textureManager.h"

class WeissSchwarz : public Game
{
private:



public:
	WeissSchwarz();
	virtual ~WeissSchwarz();
	void initialize(HWND hwnd);
	void update();
	void ai();
	void collisions();
	void render();
	void releaseALL();
	void resetALL();
};





#endif