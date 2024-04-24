#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include "graphics.h"
#include "defs.h"
#include "logic.h"

using namespace std;

int main(int argc, char *argv[])
{
    Graphics graphics;
    graphics.init();

    SDL_Texture * background = graphics.loadTexture(BACKGROUND_IMG);

    Mouse mouse;
    mouse.rect.x = SCREEN_WIDTH / 2;
    mouse.rect.y = SCREEN_HEIGHT / 2;

    BotMinnow minnow;
    minnow.rect.x = SCREEN_WIDTH;
    minnow.rect.y = SCREEN_HEIGHT/2;


    Sprite player;
    player.RenderFish = 4;
    SDL_Texture* playerTexture = graphics.loadTexture(PLAYER_SPRITE_FILE);
    player.init(playerTexture, PLAYER_FRAMES, PLAYER_CLIPS);

    Sprite player_right;
    SDL_Texture* playerTextureRight = graphics.loadTexture(PLAYER_SPRITE_FILE_RIGHT);
    player_right.init(playerTextureRight, PLAYER_FRAMES_RIGHT, PLAYER_CLIPS_RIGHT);

    Sprite minnow_right;
    minnow_right.RenderFish = 4;
    SDL_Texture* minnowTexture = graphics.loadTexture(MINNOW_SPRITE_FILE);
    minnow_right.init(minnowTexture, MINNOW_FRAMES_RIGHT, MINNOW_CLIPS_RIGHT);

    Sprite player_bite;
    player_bite.RenderFish = 6;
    SDL_Texture* biteTexture = graphics.loadTexture(PLAYER_BITE_SPRITE_FILE);
    player_bite.init(biteTexture, PLAYER_BITE_FRAMES, PLAYER_BITE_CLIPS);

    Sprite player_bite_right;
    player_bite_right.RenderFish = 6;
    SDL_Texture* biteTextureRight = graphics.loadTexture(PLAYER_BITE_SPRITE_FILE_RIGHT);
    player_bite_right.init(biteTextureRight, PLAYER_BITE_FRAMES_RIGHT, PLAYER_BITE_CLIPS_RIGHT);

    bool quit = false;
    int right = true;
    SDL_Event event;
    while (!quit) {
        graphics.prepareScene();

        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) quit = true;
        }
        graphics.renderTexture(background, 0, 0);

        const Uint8* currentKeyStates = SDL_GetKeyboardState(NULL);

        if (mouse.rect.y >= 0 && (currentKeyStates[SDL_SCANCODE_W] || currentKeyStates[SDL_SCANCODE_UP])){
                mouse.turnNorth();
        }
        if (mouse.rect.y <= SCREEN_HEIGHT - mouse.rect.w && (currentKeyStates[SDL_SCANCODE_S] || currentKeyStates[SDL_SCANCODE_DOWN])) {
                mouse.turnSouth();
        }
        if (mouse.rect.x >= 0 && (currentKeyStates[SDL_SCANCODE_A] || currentKeyStates[SDL_SCANCODE_LEFT])){
            right = false;
            mouse.turnWest();
        }
        if (mouse.rect.x <= SCREEN_WIDTH - mouse.rect.h && (currentKeyStates[SDL_SCANCODE_D] || currentKeyStates[SDL_SCANCODE_RIGHT])) {
                mouse.turnEast();
                right = true;
        }

        mouse.move();
        player.tick();
        player_right.tick();
        minnow_right.tick();
        player_bite.tick();
        player_bite_right.tick();

        minnow.rect.x -= 1.5;
        if(minnow.alive && overlap(mouse.rect, minnow.rect)) {
                minnow.alive = false;
                if(right) {
                    graphics.render(mouse.rect.x, mouse.rect.y, player_bite_right);
                    cout << 1;
                }
                else graphics.render(mouse.rect.x, mouse.rect.y, player_bite);
        }

        if(minnow.alive) {
            graphics.render(minnow.rect.x, minnow.rect.y, minnow_right);
        }

        //check xem dang di ve huong nao
        if(right) {

            graphics.render(mouse.rect.x, mouse.rect.y, player_right);
        }
        else {
            graphics.render(mouse.rect.x, mouse.rect.y, player);
        }
        graphics.presentScene();
        SDL_Delay(10);
    }

    SDL_DestroyTexture(playerTexture);
    SDL_DestroyTexture(playerTextureRight);
    SDL_DestroyTexture(minnowTexture);
    playerTexture = nullptr;
    playerTextureRight = nullptr;
    minnowTexture = nullptr;
    graphics.quit();
    return 0;
}
