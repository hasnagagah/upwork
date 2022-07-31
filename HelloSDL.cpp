#include <SDL2/SDL.h>


SDL_Window * window;
SDL_Surface * screenSurface, * gHelloWorld;


const int SCREEN_WIDTH  = 640;
const int SCREEN_HEIGHT = 480;

SDL_Event event;


bool loadMedia() {
	gHelloWorld = SDL_LoadBMP("hello_world.bmp");
	return 1;
}


SDL_Surface * loadedSurface(std::string path) {
	SDL_Surface * loadedSurface = SDL_LoadBMP(path);
	return loadSurface;
}




int main(int argumentCount, char * arguments[]) {

	SDL_Init(SDL_INIT_VIDEO);
	
	window = SDL_CreateWindow("SDL Tutorial",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
		SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	screenSurface = SDL_GetWindowSurface(window);

	SDL_FillRect(screenSurface, NULL,
		SDL_MapRGB(screenSurface->format, 0xff, 0xff, 0xff));

	loadMedia();
	SDL_BlitSurface(gHelloWorld, NULL, screenSurface, NULL);

	SDL_UpdateWindowSurface(window);


	while (SDL_PollEvent(&event)) {

		if (event.type == SDL_QUIT) {
			break;
		}

	}	

	bool quit = false;
	SDL_Event e;

	whilei (!quit)
	{
		while(SDL_PollEvent(&e) != 0)
		{
			//User requests quit
			if(e.type == SDL_QUIT)
			{
				quit = true;
			}
		}
	}

	SDL_Delay(1000);

}
