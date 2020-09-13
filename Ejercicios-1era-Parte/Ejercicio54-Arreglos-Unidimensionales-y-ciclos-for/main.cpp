#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numeros[5];

    // int indice = 3;
    // numeros[indice] = 50;
    // cout << numeros[indice] << endl;

    int numeroAlAzar = 0;
    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        numeroAlAzar = rand() % 50 + 1;
        numeros[i] = numeroAlAzar;
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout << numeros[i] << endl;
    }
        
    return 0;
}
