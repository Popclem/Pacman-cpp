//============================================================================
// Name        : SDLTest.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <windows.h>
#include <SDL.h>

#include "Pacman.h"
#include "ActionController.h"
using namespace std;


int main(int argc, char* argv[]) {

	Pacman petitPacman(6,6);
	ActionController action(petitPacman);


    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Window *window = 0;

    window = SDL_CreateWindow("Hello World!",
                              SDL_WINDOWPOS_CENTERED,
                              SDL_WINDOWPOS_CENTERED,
                              640, 480,
                              SDL_WINDOW_SHOWN);

	action.mouvement();


    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}

