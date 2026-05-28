#include <iostream>
#include <app.h>

int main() {
   App* app = new App("Hello SDL3", 800, 600, 0);
   int exitCode =  app->run();
   delete app;
   return exitCode;
}