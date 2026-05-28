#include <iostream>
#include <app.h>

SDL_Texture *texture = NULL;

void App::setup() {
   SDL_Surface *image = IMG_Load("assets/moon.jpg");
   texture = SDL_CreateTextureFromSurface(this->renderer, image);
}

void App::update() {
   // doStuff()
}

void App::onEvent() {
   if (event->type == SDL_EVENT_QUIT) {
      close();
   }
}

void App::render() {
   SDL_RenderTexture(this->renderer, texture, NULL, NULL);  
}

void App::dispose() {
   SDL_DestroyTexture(texture);
}
