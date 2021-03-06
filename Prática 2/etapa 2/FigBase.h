#ifndef FigBase_h
#define FigBase_h

#include <iostream>
using namespace std;

class FigBase{

    private:
        double x;
        double y;

        int espessura;
        int cor;
        int tipo;

    public:
        //Constructors
        FigBase(double, double, int, int, int);

        //Getters
        double getX()const;
        double getY()const;
        int getEspessura()const;
        int getCor()const;
        int getTipo()const;

        //Setters
        void setX(double);
        void setY(double);
        void setEspessura(int);
        void setCor(int);
        void setTipo(int);

        //Others
        void imprime()const;

};

#endif