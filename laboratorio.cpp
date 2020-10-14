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
    cout<<left;
    cout<<setw(10)<<"SO";
    cout<<setw(10)<<"RAM";
    cout<<setw(8)<<"MARCA";
    cout<<setw(6)<<"COLOR";
    cout<<endl;
    for(size_t i=0; i<cont; i++){
        Computadora &c = arreglo[i];
        cout<<c;
        /*cout<<"Sistema operativo: "<<c.getSistemaOperativo()<<endl;
        cout<<"Memoria RAM: "<<c.getMemoriaRam()<<endl;
        cout<<"Marca: "<<c.getMarca()<<endl;
        cout<<"Color: "<<c.getColor()<<endl;
        cout<<endl;*/

    } 
}
