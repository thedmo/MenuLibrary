A Small Library for Commandline Menuing.

Creates Objects of Menus, add Submenues and entries.
Not too beautyful but functional.

How to use:

1) Create Methods you wish to use with the Program. They have to be of Type void().

2) Create Menu Object and give it a Name. 
Menu* newMenu(std::string name)

3) Add Entries and/or SubMenus to the MenuObject. Arguments are:

Entries:
 - command for the actual string to type to invoke Method
 - description for the entry
 - actual method to be invoked
newMenu->AddEntry("command", "description", method).

SubMenu:
 - command to enter Submenu
 - Name of Submenu
newMenu->AddSubMenu(command, name)

Quit Method in every Menu is already implemented, so you can always leave with the command "q".

4) Enter Menu to start a while loop which is left, when the Quit Method gets invoked. 
newMenu->EnterMenu();