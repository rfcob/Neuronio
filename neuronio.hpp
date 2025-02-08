#include <vector>

using namespace std;

class Neuronio {

    protected:
        vector<double> pesos;
        double bias;
        double* saida;

    public:
        Neuronio(const vector<double>& pesos, double bias) 
            : pesos(pesos), bias(bias), saida(new double(0.0)) {} 


        virtual double predict(const vector<double>& entradas) = 0;
        virtual ~Neuronio() {
            delete saida; 
        }

        
};
