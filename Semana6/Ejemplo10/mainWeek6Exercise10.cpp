//Efrain Retana Segura UNA
/*
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include "clases3.h"

using namespace std;
using namespace base;

int main(int, char**) {

    shared_ptr<listaPersonas> personas = make_shared<listaPersonas>();
    personas->agregar(persona("Vargas", "Luis"));

    (*personas)
            .agregar(persona("Alfaro", "Marcela"))
            .agregar(persona("Alvarado", "Carlos"))
            .agregar(empleado("Corrales", "Marta", 500000.0))
            .agregar(empleado("Morales", "Roberto", 350000.0))
            .agregar(empleado("Martinez", "Sandra", 480000.0))
            .agregar(persona("Rodriguez", "Luisa"))
            .agregar(persona("Montero", "Rodrigo"))
            .agregar(persona("Arias", "Adriana"))
            .agregar(empleado("Zamora", "Jorge", 650000.0));
    cout << *personas.get() << endl;
    cout << "Hay " << personas->numPersonas() << " persona(s)." << endl;
    cout << endl;

    shared_ptr<listaPersonas> empleados = personas->obtenerListaEmpleados();
    cout << *empleados.get() << endl;
    cout << "Hay " << empleados->numPersonas() << " empleados(s)." << endl;
    cout << endl;

    return 0;
}

*/