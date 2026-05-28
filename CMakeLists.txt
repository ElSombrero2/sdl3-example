cmake_minimum_required(VERSION 4.3)
project(my-game)

set(SDLIMAGE_AVIF OFF)
set(SDLIMAGE_PNG OFF)

set(
   VENDORED_DIRS
      "SDL"
      "SDL_Image"
      "SDL_TTF"
)

add_executable(
   ${PROJECT_NAME}
      src/main.cpp
      src/game.cpp
)

add_subdirectory(lib)

foreach(dir ${VENDORED_DIRS})
   add_subdirectory(vendored/${dir} EXCLUDE_FROM_ALL)
   target_include_directories(app PUBLIC vendored/${dir}/include)
endforeach()

target_link_libraries(${PROJECT_NAME}
   PRIVATE 
      app
      SDL3_image::SDL3_image
      SDL3::SDL3
      SDL3_ttf::SDL3_ttf
)