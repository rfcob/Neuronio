#include "neuronio.hpp"
#include <vector>
#include <algorithm> 

class NeuronioReLU : public Neuronio {

    public:
        NeuronioReLU(const vector<double>& pesos, double bias)
            : Neuronio(pesos, bias) {}

        double predict(const std::vector<double>& entradas);

};

double NeuronioReLU::predict(const std::vector<double>& entradas) {

    double soma = 0.0;

    for (size_t i = 0; i < entradas.size(); ++i) {
        soma += entradas[i] * pesos[i];
    }

    *saida = std::max(0.0, soma + bias); 

    return *saida;
}
