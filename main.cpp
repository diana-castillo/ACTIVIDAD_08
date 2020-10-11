#include <iostream>
#include "laboratorio.h"

using namespace std;

int main(){

    Computadora compu01 = Computadora("Windows", "8 GB", "Acer", "Negro");

    Computadora compu02;
    compu02.setSistemaOperativo("Linux");
    compu02.setMemoriaRam("5 GB");
    compu02.setMarca("HP");
    compu02.setColor("Blanco");

    Laboratorio lab;
    lab.agregarFinal(compu01);
    lab.agregarFinal(compu02);

    lab.mostrar();

    return 0;
}