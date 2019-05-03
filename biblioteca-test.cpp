//
// Created by USUARIO on 3/05/2019.
//

#include "catch.hpp"
#include "biblioteca.h"

SCENARIO("cantidad de libros y revistas") {
    GIVEN("creo la biblioteca") {
        biblioteca a;
        REQUIRE(a.get_maxlibros()==a.get_maxrevistas());
        WHEN("agrego 2 libros"){
            Revista *b=new Revista(1,"hola",1);
            a.incluir(b);
            libro *c=new libro(1,"stephano pto",1);
            a.incluir(c);
            THEN("libros=1 y revistas=1"){
                REQUIRE(a.get_maxrevistas()==1 );
                REQUIRE(a.get_maxlibros()==1);
            }
        }

    }
}