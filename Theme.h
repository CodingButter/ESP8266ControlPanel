#pragma once
#include <Arduino.h>
#include "Utils/Color.h"

struct STYLE_TYPE
{
    Color PRIMARY = Color(37, 41, 47);     // 25292f
    Color SECONDARY = Color(246, 173, 82); // f6ad52;
    Color ALERT = Color(202, 90, 26);      // CA5A1A
    Color WARNING = Color(112, 64, 50);    // 704032
    Color SUCCESS = Color(71, 75, 74);     // 474b4a
};