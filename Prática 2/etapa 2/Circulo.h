#ifndef Circulo_h
#define Circulo_h

#include "FigBase.h"
using namespace std;

class Circulo: public FigBase{
    private:
        double raio;
    public:
        //Constructors
        Circulo(double, double, double,int, int, int);
        
        //Getters
        double getRaio()const;

        //Setters
        void setRaio( double);

        //Others
        float area()const;
        float perimetro()const;
        void imprime()const;
};

#endif