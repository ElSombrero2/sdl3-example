#ifndef __APP_H__
#define __APP_H__
#include <SDL3/SDL.h>
#include <SDL3_image/SDL_image.h>
#include <SDL3_ttf/SDL_ttf.h>
#include <SDL3/SDL_timer.h>

class App {
private:
   SDL_Window* window;
   SDL_Renderer* renderer;
   SDL_Event* event;
   bool running = true;

public:
   App(const char* title, int width, int height, int flag);
   ~App();
   void setup();
   void update();
   void render();
   void onEvent();
   void close();
   int run();
   void dispose();
};

#endif