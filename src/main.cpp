#define SDL_MAIN_HANDLED

#include "sdl/SDL.h"
#include "sdl/SDL_opengl.h"

#include <iostream>
#include <cassert>
#include <GL/GLU.h>

//compile: g++ .\main.cpp .\SDL2.dll -o out.exe -lopengl32

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

int main()
{
    SDL_Window *window = SDL_CreateWindow("OpenGL Test", 100, 100, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_OPENGL);
    assert(window);
    SDL_GLContext context = SDL_GL_CreateContext(window);

    bool running = true;
    while(running)
    {
        SDL_Event event;

        while(SDL_PollEvent(&event))
        {
            switch(event.type) {

                case SDL_KEYDOWN:
                    switch(event.key.keysym.sym)
                    {
                        case SDLK_ESCAPE:
                            running = false;
                            break;
                    }
                    break;

                case SDL_QUIT:
                    running = 0;
                    break;
            }
        }

        glViewport(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);
        glClearColor(1.f, 0.f, 1.f, 0.f);
        glClear(GL_COLOR_BUFFER_BIT);

        SDL_GL_SwapWindow(window);
    }

    return 0;
}