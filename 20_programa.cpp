#include <iostream>
#include <vector>
#include <algorithm>

struct Empleado {
    std::string nombre;
    double salario;
    std::string departamento;
};

bool compararPorNombre(const Empleado& emp1, const Empleado& emp2) {
    return emp1.nombre < emp2.nombre;
}

int main() {
    // Vector para almacenar los detalles de los empleados
    std::vector<Empleado> empleados;

    // Solicitar al usuario que ingrese los detalles de varios empleados
    char opcion;
    do {
        Empleado emp;
        std::cout << "Ingrese el nombre del empleado: ";
        std::cin >> emp.nombre;
        std::cout << "Ingrese el salario del empleado: ";
        std::cin >> emp.salario;
        std::cout << "Ingrese el departamento del empleado: ";
        std::cin >> emp.departamento;

        empleados.push_back(emp);

        std::cout << "¿Desea ingresar otro empleado? (s/n): ";
        std::cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    // Ordenar los empleados por nombre
    std::sort(empleados.begin(), empleados.end(), compararPorNombre);

    // Mostrar la información de los empleados
    std::cout << "\nInformacion de los empleados:\n";
    for (const auto& emp : empleados) {
        std::cout << "Nombre: " << emp.nombre << ", Salario: " << emp.salario << ", Departamento: " << emp.departamento << std::endl;
    }

    return 0;
}

