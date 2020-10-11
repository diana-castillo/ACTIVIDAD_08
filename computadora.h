#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
using namespace std;

class Computadora
{
    private:
        string sistemaOperativo;
        string memoriaRam;
        string marca;
        string color;

    public:
        Computadora();
        Computadora(const string &sistemaOperativo, const string &memoriaRam, const string &marca, const string &color);
        
        void setSistemaOperativo(const string &v);
        string getSistemaOperativo();
        
        void setMemoriaRam(const string &v);
        string getMemoriaRam();
        
        void setMarca(const string &v);
        string getMarca();

        void setColor(const string &v);
        string getColor();
};

#endif