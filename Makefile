help:
	echo "call 'make install' to install dependencies and 'make build' to build your project"

install:
	git clone https://github.com/libsdl-org/SDL.git vendored/SDL;
	git clone https://github.com/libsdl-org/SDL_image.git vendored/SDL_Image;
	git clone https://github.com/libsdl-org/SDL_ttf.git vendored/SDL_TTF;

build: CMakeLists.txt
	cmake -B .build && cmake --build .build

run: .build/my-game
	./.build/my-game

clean: .
	rm -rf .build