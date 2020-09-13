#include <iostream>

using namespace std;

bool login () {
    string password = "";
    int intentos = 0;

    while (intentos <= 3) {
        system("cls");

        	cout << "Bienvenido a" << endl;
	
            cout << " _  _      _______      ___     .___  ___. _______ .______           _______."<<endl;
            cout << "| || |    /  _____|    /   \\    |   \\/   ||   ____||   _  \\         /       |"<<endl;
            cout << "| || |_  |  |  __     /  ^  \\   |  \\  /  ||  |__   |  |_)  |       |   (----`"<<endl;
            cout << "|__   _| |  | |_ |   /  /_\\  \\  |  |\\/|  ||   __|  |      /         \\   \\    "<<endl;
            cout << "   | |   |  |__| |  /  _____  \\ |  |  |  ||  |____ |  |\\  \\----..----)   |   "<<endl;
            cout << "   |_|    \\______| /__/     \\__\\|__|  |__||_______|| _| `._____||_______/    "<<endl;
            cout << ""<<endl;
            
            cout << endl;
            cout << endl;
            cout << endl;

        if (intentos == 3) {
            cout << "No se ha podido validar su password, por favor contacte al administrador del sistema " 
            << endl;

            return false;
        }

        cout << "Ingrese su password: ";
        cin >> password;

        if (password == "admin") {
            system("cls");
            return true;
        }

        intentos++;
    }
     
    return false;
}