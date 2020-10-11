#include "laboratorio.h"

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarFinal(const Computadora &c)
{
    if (cont < 5) {
        arreglo[cont] = c;
        cont++;
    }
    else {
        cout<<"Arreglo lleno"<<endl;
    }
}

void Laboratorio::mostrar()
{
    for(size_t i=0; i<cont; i++){
        Computadora &c = arreglo[i];
        cout<<"Sistema operativo: "<<c.getSistemaOperativo()<<endl;
        cout<<"Memoria RAM: "<<c.getMemoriaRam()<<endl;
        cout<<"Marca: "<<c.getMarca()<<endl;
        cout<<"Color: "<<c.getColor()<<endl;
        cout<<endl;

    }   
}
