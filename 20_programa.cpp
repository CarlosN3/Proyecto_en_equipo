#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//comentario prueba
struct Empleado {
    string nombre;
    double salario;
    string departamento;
};

bool compararPorNombre(const Empleado& emp1, const Empleado& emp2) {
    return emp1.nombre < emp2.nombre;
}

void empleados() {
    // Vector para almacenar los detalles de los empleados
    vector<Empleado> empleados;

    // Solicitar al usuario que ingrese los detalles de varios empleados
    char opcion;
    do {
        Empleado emp;
        cout << "Ingrese el nombre del empleado: ";
        cin >> emp.nombre;
        cout << "Ingrese el salario del empleado: ";
        cin >> emp.salario;
        cout << "Ingrese el departamento del empleado: ";
        cin >> emp.departamento;

        empleados.push_back(emp);

        cout << "¿Desea ingresar otro empleado? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    // Ordenar los empleados por nombre
    sort(empleados.begin(), empleados.end(), compararPorNombre);

    // Mostrar la información de los empleados
    cout << "\nInformacion de los empleados:\n";
    for (const auto& emp : empleados) {
        cout << "Nombre: " << emp.nombre << ", Salario: " << emp.salario << ", Departamento: " << emp.departamento << std::endl;
    }
}

