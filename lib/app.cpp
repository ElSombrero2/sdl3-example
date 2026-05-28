#include <iostream>
#include <app.h>

using namespace std;

App::App(const char* title, int width, int height, int flag) {
   SDL_Init(SDL_INIT_VIDEO);
   window = SDL_CreateWindow(title, width, height, flag);
   renderer = SDL_CreateRenderer(window, NULL);
   event = new SDL_Event();
}

int App::run() {
   setup();
   while (running) {
      update();
      while (SDL_PollEvent(event)) {
         onEvent();
      }
      render();
      SDL_RenderPresent(renderer);
      SDL_RenderClear(renderer);
   }
   return 0;
}

App::~App() {
   dispose();
   SDL_DestroyRenderer(renderer);
   SDL_DestroyWindow(window);
   SDL_Quit();
}

void App::close() {
   running = false;
}