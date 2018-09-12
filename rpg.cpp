/**
 *  File:     rpg.cpp
 *
 *  Author:   Kevin Mendoza <kpmendoza@yahoo.com>
 *
 *  Purpose:  Simple text-based RPG
 *
 *  Version:  1.0.0
 *
 *  Version History:
 *      - 1.0.0 -   Initial Code
 **/

 /**
  * Included libraries, definitions, and function declarations.
  **/

  #include <iostream>
  #include <stdlib.h>

  using namespace std;

  int menu();

  int main(void)
  {
      menu();
      return 0;
  }

  int menu()
  {
      int choice = 0;

      cout << endl;
      cout << "Welcome to RPG" << endl;
      cout << endl;
      cout << "1) New Game" << endl;
      cout << "2) Load Game" << endl;
      cout << "0) Exit" << endl;
      cout << endl;
      cout << "Choice:" << endl;
      cin >> choice;

      return choice;
  }
