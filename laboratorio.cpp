#include "laboratorio.h"
#include <fstream>

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

void Laboratorio::respaldar_tabla()
{
    ofstream archivo("computadoras_tabla.txt");
    if (archivo.is_open()) {
        archivo<<left;
        archivo<<setw(10)<<"SO";
        archivo<<setw(10)<<"RAM";
        archivo<<setw(8)<<"MARCA";
        archivo<<setw(6)<<"COLOR";
        archivo<<endl;
        for(size_t i=0; i<cont; i++){
            Computadora &c = arreglo[i];
            archivo<<c;
        }
    }
    archivo.close();
}

void Laboratorio::respaldar()
{
        ofstream archivo("computadoras.txt");
    if (archivo.is_open()) {
        for(size_t i=0; i<cont; i++){
            Computadora &c = arreglo[i];
            archivo<<c.getSistemaOperativo()<<endl;
            archivo<<c.getMemoriaRam()<<endl;
            archivo<<c.getMarca()<<endl;
            archivo<<c.getColor()<<endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar()
{
    ifstream archivo("computadoras.txt");
    if (archivo.is_open()) {
        string temp;
        Computadora c;

        while(true)
        {
            getline(archivo, temp);
            if(archivo.eof()) {
                break;
            }
            c.setSistemaOperativo(temp);

            getline(archivo, temp);
            c.setMemoriaRam(temp);

            getline(archivo, temp);
            c.setMarca(temp);

            getline(archivo, temp);
            c.setColor(temp);

            agregarFinal(c);
        }
    }
    archivo.close();
}