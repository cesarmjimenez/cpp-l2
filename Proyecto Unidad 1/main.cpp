#include <iostream>
#include "starShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int opcionMenu = 0;
    system("cls");

    cout << "**************" << endl;
    cout << "Menu De Juegos" << endl;
    cout << "**************" << endl << endl;

    cout << "Seleccione un juego" << endl << endl;
    cout << "1 - StarShip" << endl << endl;
    cout << "2 - Snake" << endl << endl;
    cout << "Ingrese un numero del menu para seleccionar un juego: ";
    cin >> opcionMenu;

    switch (opcionMenu)
    {
    case 1:{
        system("cls");
        starShip();
    }
        break;

    case 2:{
        system("cls");
        snake();
    }    
        break;
    
    default:
        break;
    }

    return 0;
}