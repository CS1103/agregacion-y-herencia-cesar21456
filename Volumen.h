//
// Created by USUARIO on 3/05/2019.
//

#ifndef POO_VOLUMEN_H
#define POO_VOLUMEN_H

#include <iostream>
#include <string>
using namespace std;

class Volumen {
protected:
    string nombre;
    int numero_volumen;
public:
    virtual void mostrar()=0;
    Volumen(string nombre1, int numero_volumen1):nombre(nombre1),numero_volumen(numero_volumen1){};
};

class libro:public Volumen{
private:
    int numerolibro;

public:
    void mostrar() override{
        cout<<"Volumen"<<numero_volumen<<": Libro"<<numerolibro<<": Titulo:"<<nombre<<endl;
    }
    libro(int numerolibro1,string nombre, int numero_volumen1):Volumen(nombre,numero_volumen1),numerolibro(numerolibro1){};
};

class Revista:public Volumen {
private:
    int numerorevista;
public:
    void mostrar() override{
        cout<<"Volumen"<<numero_volumen<<": Revista"<<numerorevista<<": Titulo:"<<nombre<<endl;
    }
    Revista(int numerolibro1,string nombre, int numero_volumen1):Volumen(nombre,numero_volumen1),numerorevista(numerolibro1){};
};





#endif //POO_VOLUMEN_H
