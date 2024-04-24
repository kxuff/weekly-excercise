#ifndef _DEFS__H
#define _DEFS__H

#define SCREEN_WIDTH 1150
#define SCREEN_HEIGHT 865
#define WINDOW_TITLE "Hungry Fish"

#define BACKGROUND_IMG "background\\back.png"

const char*  PLAYER_SPRITE_FILE = "image\\player.png";
const int PLAYER_CLIPS[][4] = {
//    {0, 0, 50, 50},
//    {50, 0, 50, 50},
//    {100, 0, 50, 50},
//    {150, 0, 50, 50},
//    {200, 0, 50, 50},
//    {250, 0, 50, 50},

//    {300, 0, 50, 50},
//    {350, 0, 50, 50},
//    {400, 0, 50, 50},
//    {450, 0, 50, 50},
//    {500, 0, 50, 50},
//    {550, 0, 50, 50},

//    {600, 0, 50, 50},
//    {650, 0, 50, 50},
//    {700, 0, 50, 50},
    {750, 0, 50, 45},
    {800, 0, 50, 45},
    {850, 0, 50, 45},
    {900, 0, 50, 45},
    {950, 0, 50, 45},
    {1000, 0, 50, 45},
    {1050, 0, 50, 45},
    {1100, 0, 50, 45},
    {1150, 0, 50, 45},
    {1200, 0, 50, 45},
    {1250, 0, 50, 45},
    {1300, 0, 50, 45},

//    {1350, 0, 50, 50},
//    {1400, 0, 50, 50},
//    {1450, 0, 50, 50},
//    {1500, 0, 50, 50},
//    {1550, 0, 50, 50},
};
const int PLAYER_FRAMES = sizeof(PLAYER_CLIPS)/sizeof(int)/4;

const char*  PLAYER_SPRITE_FILE_RIGHT = "image\\right.png";
const int PLAYER_CLIPS_RIGHT[][4] = {
//    {0, 0, 50, 50},
//    {50, 0, 50, 50},
//    {100, 0, 50, 50},
//    {150, 0, 50, 50},
//    {200, 0, 50, 50},
//    {250, 0, 50, 50},

    {300, 0, 50, 45},
    {350, 0, 50, 45},
    {400, 0, 50, 45},
    {450, 0, 50, 45},
    {500, 0, 50, 45},
    {550, 0, 50, 45},

    {600, 0, 50, 45},
    {650, 0, 50, 45},
    {700, 0, 50, 45},
    {750, 0, 50, 45},
    {800, 0, 50, 45},
//    {850, 0, 50, 50},
//    {900, 0, 50, 50},
//    {950, 0, 50, 50},
//    {1000, 0, 50, 50},
//    {1050, 0, 50, 50},
//    {1100, 0, 50, 50},
//    {1150, 0, 50, 50},
//    {1200, 0, 50, 50},
//    {1250, 0, 50, 50},
//    {1300, 0, 50, 50},
//
//    {1350, 0, 50, 50},
//    {1400, 0, 50, 50},
//    {1450, 0, 50, 50},
//    {1500, 0, 50, 50},
//    {1550, 0, 50, 50},
};
const int PLAYER_FRAMES_RIGHT = sizeof(PLAYER_CLIPS_RIGHT)/sizeof(int)/4;

const char*  MINNOW_SPRITE_FILE = "image\\Minnow.png";
const int MINNOW_CLIPS_RIGHT[][4] = {
    {0, 0, 50, 27},
    {50, 0, 50, 27},
    {100, 0, 50, 27},
    {150, 0, 50, 27},
    {200, 0, 50, 27},
    {250, 0, 50, 27},

    {300, 0, 50, 27},
    {350, 0, 50, 27},
    {400, 0, 50, 27},
    {450, 0, 50, 27},
    {500, 0, 50, 27},
    {550, 0, 50, 27},

    {600, 0, 50, 27},
    {650, 0, 50, 27},
    {700, 0, 50, 27},
    {750, 0, 50, 27},
//    {800, 0, 50, 50},
//    {850, 0, 50, 50},
//    {900, 0, 50, 50},
//    {950, 0, 50, 50},
//    {1000, 0, 50, 50},

};
const int MINNOW_FRAMES_RIGHT = sizeof(MINNOW_CLIPS_RIGHT)/sizeof(int)/4;

const char*  PLAYER_BITE_SPRITE_FILE = "image\\player.png";
const int PLAYER_BITE_CLIPS[][4] = {
    {0, 0, 50, 45},
    {50, 0, 50, 45},
    {100, 0, 50, 45},
    {150, 0, 50, 45},
    {200, 0, 50, 45},
    {250, 0, 50, 45},

};
const int PLAYER_BITE_FRAMES = sizeof(PLAYER_BITE_CLIPS)/sizeof(int)/4;

const char*  PLAYER_BITE_SPRITE_FILE_RIGHT = "image\\right.png";
const int PLAYER_BITE_CLIPS_RIGHT[][4] = {
    {1600, 0, 50, 45},
    {1550, 0, 50, 45},
    {1500, 0, 50, 45},
    {1450, 0, 50, 45},
    {1400, 0, 50, 45},
};
const int PLAYER_BITE_FRAMES_RIGHT = sizeof(PLAYER_BITE_CLIPS_RIGHT)/sizeof(int)/4;
#endif
