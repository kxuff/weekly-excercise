#ifndef LOGIC_H
#define LOGIC_H

#define INITIAL_SPEED 3

bool overlap(SDL_Rect a, SDL_Rect b) {
   return ( a.x <= b.x + b.w && a.y <= b.y + b.h  && a.x + a.w >= b.x && a.y + a.h >= b.y);
}

struct Minnow {
    SDL_Rect rect;
    Minnow(int x, int y) {
        rect.x = x;
        rect.y = y;
        rect.h = 27;
        rect.w = 50;
    }
};

struct Mouse {
    SDL_Rect rect = {100, 100, 50, 45};
    SDL_Texture* fishTexture;
    int dx = 0, dy = 0;
    int speed = INITIAL_SPEED;

    bool canEat(const Minnow& minnow) {
        return overlap(rect, minnow.rect);
    }

    void move() {
        rect.x += dx;
        rect.y += dy;
    }

    void turnNorth() {
        rect.y -= speed;
        dx = 0;
    }

    void turnSouth() {
        rect.y += speed;
        dx = 0;
    }
    void turnWest() {
        dy = 0;
        rect.x -= speed;
    }

    void turnEast() {
        dy = 0;
        rect.x += speed;
    }

    void InitTexture(Graphics& graphics) {
        fishTexture = graphics.loadTexture("image//fish.png");
    }

    void render(Graphics& graphics) {
        graphics.renderTexture(fishTexture, rect.x, rect.y);
    }
};

struct BotMinnow {
    SDL_Rect rect;
    bool alive = true;
};
#endif
