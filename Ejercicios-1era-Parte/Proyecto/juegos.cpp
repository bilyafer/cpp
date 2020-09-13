#include <iostream>

using namespace std;

string arregloJuegos[10][2] = {
	{ "J001", "The Crew 2"},
	{ "J002", "Jurassic World Evolution"},
	{ "J003", "God Of War"},
	{ "J004", "Monster Hunter"},
	{ "J005", "Far Cry 5"},
	{ "J006", "Call Of Dutty WWII"},
	{ "J007", "FIFA 2018"},
	{ "J008", "Destiny 2"},
	{ "J009", "Horizon Hero"},
	{ "J010", "Rocket League"}
};

void mostrarJuegos() {
    system("cls");
    cout << "Codigo, Descripcion" << endl;
    cout << "-------------------" << endl << endl;

    for (int i = 0; i < 10;i++)
    {
        cout << arregloJuegos[i][0] << " | ";
        cout << arregloJuegos[i][1] << " | ";
        cout << endl;
    }    

    cout << endl;
    cout << endl;
    system("pause");
}

string buscarJuego(string codigo) {

    for (int i = 0; i < 10; i++)
    {
        if (arregloJuegos[i][0] == codigo) {
            return arregloJuegos[i][1];
        }
    }

    return "";
}