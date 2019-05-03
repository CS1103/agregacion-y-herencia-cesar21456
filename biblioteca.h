//
// Created by USUARIO on 3/05/2019.
//

#ifndef POO_BIBLIOTECA_H
#define POO_BIBLIOTECA_H

#include "Volumen.h"
#include <vector>

class biblioteca {
vector<Volumen*> lista;
unsigned int maxlibros;
unsigned int maxrevistas;
public:
    void mostrarBiblioteca(){
        for (int i=0;i<lista.size();i++){
            lista[i]->mostrar();
        }
    }
    bool incluir(Volumen *a){
        lista.push_back(a);

        libro* var= dynamic_cast<libro*>(a);
        if (var!=nullptr){
        maxrevistas+=1;
        }else{
            maxlibros+=1;
        }
        return true;
    }
    biblioteca():maxlibros(0),maxrevistas(0){};
    string get_all(){
        string a;
        a="libros:"+to_string(maxlibros);
        a+="revistas:"+to_string(maxrevistas);
        return a;

    }
    int get_maxrevistas(){
        return maxrevistas;
    }
    int get_maxlibros(){
        return maxlibros;
    }

};


#endif //POO_BIBLIOTECA_H
