#pragma once
#ifndef MANGOHUD_GAMEPAD_H
#define MANGOHUD_GAMEPAD_H
#include <vector>
#include <string>

struct gamepad {
    std::string battery;
    std::string state;
    std::string name;
};

extern std::vector<gamepad> gamepad_data;

extern bool gamepad_found;
extern int gamepad_count;
extern int xone_count;
extern int ds4_count;
extern int ds5_count;
extern int switch_count;
void gamepad_update();
void gamepad_info();


#endif // MANGOHUD_GAMEPAD_H
