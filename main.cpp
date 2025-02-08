#include "neuronioReLu.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Caso 1: __________________________________________________________________________________________


    vector<double> entradas1 = {0.3, 2.0};
    vector<double> pesos1 = {0.2, 0.4};
    double bias1 = -1.5;

    Neuronio* neuronio1 = new NeuronioReLU(pesos1, bias1);

    double saida1 = neuronio1->predict(entradas1);
    cout << "Caso 1 - Saída: " << saida1 << endl;

    // Caso 2: ___________________________________________________________________________________________


    vector<double> entradas2 = {0.3, 2};
    vector<double> pesos2 = {0.2, 0.4};
    double bias2 = -0.5;

    Neuronio* neuronio2 = new NeuronioReLU(pesos2, bias2);


    double saida2 = neuronio2->predict(entradas2);
    cout << "Caso 2 - Saída: " << saida2 << endl;


    //Caso 3:
    //entrando manualmente_________________________________________________________________________________

    int numPesos;
    cout << "Digite o número de pesos (deve ser igual ao número de entradas): ";
    cin >> numPesos;

    vector<double> entradas(numPesos);
    vector<double> pesos(numPesos);
    double bias;

    cout << "Digite os valores das entradas:\n";
    for (int i = 0; i < numPesos; ++i) {
        cout << "Entrada " << i + 1 << ": ";
        cin >> entradas[i];
    }

    cout << "Digite os valores dos pesos:\n";
    for (int i = 0; i < numPesos; ++i) {
        cout << "Peso " << i + 1 << ": ";
        cin >> pesos[i];
    }

    cout << "Digite o valor do bias: ";
    cin >> bias;

    
    Neuronio* neuronio3 = new NeuronioReLU(pesos, bias);

    
    double saida = neuronio3->predict(entradas);
    cout << "Saída: " << saida << endl;


   // Liberar a memmoria__________________________________________________________________________________
    delete neuronio1;
    delete neuronio2;  
    delete neuronio3;

    return 0;
}

