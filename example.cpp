#include <string>

#include "menu.h"

//Methods for all Menu Entries
void firstMethod() { std::cout << "I Do one thing." << std::endl; }
void seconMethod() { std::cout << "I Do two things." << std::endl; }

//Initial Setup of Menu. Adds Functions to entries
void ConfigureMenu(Menu *menu) {
    menu->AddSubMenu("sub", "Sub Menu");
    menu->AddEntry("f", "first Entry.", firstMethod);
    menu->AddEntry("s", "second entry.", seconMethod);
    menu->GetSubMenu()->AddEntry("ff", "first Sub entry.", []() {
        std::cout << "i am a Sub entry" << std::endl;
    });
}


int main() {
    //Create Menu Object
    Menu *mainMenu = new Menu("Main Menu");

    //Setup Entries
    ConfigureMenu(mainMenu);

    //Enter Menu
    mainMenu->EnterMenu();

    return 0;
}