/* 放預設函式庫與一些要統一的大小設定，有不滿意請盡量說，要一起修正！ */
#ifndef BASIC_SETTING
#define BASIC_SETTING

// 預設函式庫
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // for bool type
#include "../SDL2/SDL.h" //..會回到上層資料夾，就可以再找SDL2
#include "../SDL2/SDL_image.h"

// private / public 設定，我個人喜歡用，看大家要不要！
#define private static
#define public

// windows大小 + 名字
#define WINDOWS_NAME "2D-Craft"
enum sizeOfWindow {WINDOW_WIDTH = 720, WINDOW_HEIGHT = 480};

// 方塊邊長
#define TOTAL_BLOCK_NUMBER_IN_WIDTH 12
#define BLOCK_WIDTH (WINDOW_HEIGHT / TOTAL_BLOCK_NUMBER_IN_WIDTH) // 用寬能放幾個推算方塊的邊長

// 位置資訊，用 x,y 一起比較方便
struct pos
{
    int x;
    int y;
};
typedef struct pos SDL_position;


#endif